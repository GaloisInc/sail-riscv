import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.PreludeMemAddrtype
import LeanRV64DExecutable.TypesExt
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.VmemTypes
import LeanRV64DExecutable.SysRegs
import LeanRV64DExecutable.SysExceptions
import LeanRV64DExecutable.PmpRegs
import LeanRV64DExecutable.FdextRegs
import LeanRV64DExecutable.VextRegs
import LeanRV64DExecutable.Smcntrpmf
import LeanRV64DExecutable.SysControl
import LeanRV64DExecutable.Platform
import LeanRV64DExecutable.Mem
import LeanRV64DExecutable.VmemPte
import LeanRV64DExecutable.VmemPtw
import LeanRV64DExecutable.VmemTlb

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

/-- Type quantifiers: pte_size : Nat, pte_size ≥ 0, pte_size ∈ {4, 8} -/
def write_pte (paddr : physaddr) (pte_size : Nat) (pte : (BitVec (pte_size * 8))) : SailM (Result Bool ExceptionType) := do
  (mem_write_value_priv paddr pte_size pte Supervisor false false false)

/-- Type quantifiers: pte_size : Nat, pte_size ≥ 0, pte_size ∈ {4, 8} -/
def read_pte (paddr : physaddr) (pte_size : Nat) : SailM (Result (BitVec (8 * pte_size)) ExceptionType) := do
  (mem_read_priv (Read Data) Supervisor paddr pte_size false false false)

/-- Type quantifiers: k_ex83208# : Bool, level : Nat, k_ex83206# : Bool, k_ex83205# : Bool, sv_width
  : Nat, is_sv_mode(sv_width), 0 ≤ level ∧
  level ≤
  (if ( sv_width = 32  : Bool) then 1 else (if ( sv_width = 39  : Bool) then 2 else (if ( sv_width =
  48  : Bool) then 3 else 4))) -/
def pt_walk (sv_width : Nat) (vpn : (BitVec (sv_width - 12))) (ac : (AccessType Unit)) (priv : Privilege) (mxr : Bool) (do_sum : Bool) (pt_base : (BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44))) (level : Nat) (global : Bool) (ext_ptw : Unit) : SailM (Result ((PTW_Output sv_width) × Unit) (PTW_Error × Unit)) := SailME.run do
  let vpn_i_size :=
    if ((sv_width == 32) : Bool)
    then 10
    else 9
  let vpn_i :=
    (Sail.BitVec.extractLsb vpn (((level +i 1) *i vpn_i_size) -i 1) (level *i vpn_i_size))
  let log_pte_size_bytes :=
    if ((sv_width == 32) : Bool)
    then 2
    else 3
  let pte_addr := (pt_base ++ (vpn_i ++ (zeros (n := log_pte_size_bytes))))
  assert ((sv_width == 32) || (xlen == 64)) "sys/vmem.sail:103.36-103.37"
  let pte_addr := (Physaddr (zero_extend (m := 64) pte_addr))
  match (← (read_pte pte_addr (2 ^i log_pte_size_bytes))) with
  | .Err _ => (pure (Err ((PTW_Access ()), ext_ptw)))
  | .Ok pte =>
    (do
      let pte_flags := (Mk_PTE_Flags (Sail.BitVec.extractLsb pte 7 0))
      let pte_ext := (ext_bits_of_PTE pte)
      if ((← (pte_is_invalid pte_flags pte_ext)) : Bool)
      then (pure (Err ((PTW_Invalid_PTE ()), ext_ptw)))
      else
        (do
          let ppn := (PPN_of_PTE pte)
          let global := (global || ((_get_PTE_Flags_G pte_flags) == (0b1 : (BitVec 1))))
          if ((pte_is_non_leaf pte_flags) : Bool)
          then
            (do
              if ((level >b 0) : Bool)
              then (pt_walk sv_width vpn ac priv mxr do_sum ppn (level -i 1) global ext_ptw)
              else (pure (Err ((PTW_Invalid_PTE ()), ext_ptw))))
          else
            (do
              let ppn_size_bits :=
                if ((sv_width == 32) : Bool)
                then 10
                else 9
              if ((level >b 0) : Bool)
              then
                (do
                  let low_bits := (ppn_size_bits *i level)
                  if (((Sail.BitVec.extractLsb ppn (low_bits -i 1) 0) != (zeros
                         (n := (((((if ((sv_width == 32) : Bool)
                                 then 10
                                 else 9) *i level) -i 1) -i 0) +i 1)))) : Bool)
                  then
                    SailME.throw ((Err ((PTW_Misaligned ()), ext_ptw)) : (Result ((PTW_Output sv_width) × Unit) (PTW_Error × Unit)))
                  else (pure ()))
              else (pure ())
              match (← (check_PTE_permission ac priv mxr do_sum pte_flags pte_ext ext_ptw)) with
              | .PTE_Check_Failure (ext_ptw, ext_ptw_fail) =>
                (pure (Err ((ext_get_ptw_error ext_ptw_fail), ext_ptw)))
              | .PTE_Check_Success ext_ptw =>
                (let ppn :=
                  if ((level >b 0) : Bool)
                  then
                    (let low_bits := (ppn_size_bits *i level)
                    ((Sail.BitVec.extractLsb ppn ((Sail.BitVec.length ppn) -i 1) low_bits) ++ (Sail.BitVec.extractLsb
                        vpn (low_bits -i 1) 0)))
                  else ppn
                (pure (Ok
                    ({ ppn := ppn
                       pte := pte
                       pteAddr := pte_addr
                       level := level
                       global := global }, ext_ptw)))))))
termination_by let (_, _, _, _, _, _, _, level, _, _) := (sv_width, vpn, ac, priv, mxr, do_sum, pt_base, level, global, ext_ptw); (level).toNat

def csr_name_map_forwards_matches (arg_ : (BitVec 12)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0x301 : (BitVec 12))) : Bool)
  then true
  else
    (if ((b__0 == (0x300 : (BitVec 12))) : Bool)
    then true
    else
      (if ((b__0 == (0x310 : (BitVec 12))) : Bool)
      then true
      else
        (if ((b__0 == (0x747 : (BitVec 12))) : Bool)
        then true
        else
          (if ((b__0 == (0x757 : (BitVec 12))) : Bool)
          then true
          else
            (if ((b__0 == (0x30A : (BitVec 12))) : Bool)
            then true
            else
              (if ((b__0 == (0x31A : (BitVec 12))) : Bool)
              then true
              else
                (if ((b__0 == (0x10A : (BitVec 12))) : Bool)
                then true
                else
                  (if ((b__0 == (0x304 : (BitVec 12))) : Bool)
                  then true
                  else
                    (if ((b__0 == (0x344 : (BitVec 12))) : Bool)
                    then true
                    else
                      (if ((b__0 == (0x302 : (BitVec 12))) : Bool)
                      then true
                      else
                        (if ((b__0 == (0x312 : (BitVec 12))) : Bool)
                        then true
                        else
                          (if ((b__0 == (0x303 : (BitVec 12))) : Bool)
                          then true
                          else
                            (if ((b__0 == (0x342 : (BitVec 12))) : Bool)
                            then true
                            else
                              (if ((b__0 == (0x343 : (BitVec 12))) : Bool)
                              then true
                              else
                                (if ((b__0 == (0x340 : (BitVec 12))) : Bool)
                                then true
                                else
                                  (if ((b__0 == (0x106 : (BitVec 12))) : Bool)
                                  then true
                                  else
                                    (if ((b__0 == (0x306 : (BitVec 12))) : Bool)
                                    then true
                                    else
                                      (if ((b__0 == (0x320 : (BitVec 12))) : Bool)
                                      then true
                                      else
                                        (if ((b__0 == (0xF11 : (BitVec 12))) : Bool)
                                        then true
                                        else
                                          (if ((b__0 == (0xF12 : (BitVec 12))) : Bool)
                                          then true
                                          else
                                            (if ((b__0 == (0xF13 : (BitVec 12))) : Bool)
                                            then true
                                            else
                                              (if ((b__0 == (0xF14 : (BitVec 12))) : Bool)
                                              then true
                                              else
                                                (if ((b__0 == (0xF15 : (BitVec 12))) : Bool)
                                                then true
                                                else
                                                  (if ((b__0 == (0x100 : (BitVec 12))) : Bool)
                                                  then true
                                                  else
                                                    (if ((b__0 == (0x144 : (BitVec 12))) : Bool)
                                                    then true
                                                    else
                                                      (if ((b__0 == (0x104 : (BitVec 12))) : Bool)
                                                      then true
                                                      else
                                                        (if ((b__0 == (0x140 : (BitVec 12))) : Bool)
                                                        then true
                                                        else
                                                          (if ((b__0 == (0x142 : (BitVec 12))) : Bool)
                                                          then true
                                                          else
                                                            (if ((b__0 == (0x143 : (BitVec 12))) : Bool)
                                                            then true
                                                            else
                                                              (if ((b__0 == (0x7A0 : (BitVec 12))) : Bool)
                                                              then true
                                                              else
                                                                (if ((b__0 == (0x7A1 : (BitVec 12))) : Bool)
                                                                then true
                                                                else
                                                                  (if ((b__0 == (0x7A2 : (BitVec 12))) : Bool)
                                                                  then true
                                                                  else
                                                                    (if ((b__0 == (0x7A3 : (BitVec 12))) : Bool)
                                                                    then true
                                                                    else
                                                                      (if ((b__0 == (0x105 : (BitVec 12))) : Bool)
                                                                      then true
                                                                      else
                                                                        (if ((b__0 == (0x141 : (BitVec 12))) : Bool)
                                                                        then true
                                                                        else
                                                                          (if ((b__0 == (0x305 : (BitVec 12))) : Bool)
                                                                          then true
                                                                          else
                                                                            (if ((b__0 == (0x341 : (BitVec 12))) : Bool)
                                                                            then true
                                                                            else
                                                                              (if ((b__0 == (0x3A0 : (BitVec 12))) : Bool)
                                                                              then true
                                                                              else
                                                                                (if ((b__0 == (0x3A1 : (BitVec 12))) : Bool)
                                                                                then true
                                                                                else
                                                                                  (if ((b__0 == (0x3A2 : (BitVec 12))) : Bool)
                                                                                  then true
                                                                                  else
                                                                                    (if ((b__0 == (0x3A3 : (BitVec 12))) : Bool)
                                                                                    then true
                                                                                    else
                                                                                      (if ((b__0 == (0x3A4 : (BitVec 12))) : Bool)
                                                                                      then true
                                                                                      else
                                                                                        (if ((b__0 == (0x3A5 : (BitVec 12))) : Bool)
                                                                                        then true
                                                                                        else
                                                                                          (if ((b__0 == (0x3A6 : (BitVec 12))) : Bool)
                                                                                          then true
                                                                                          else
                                                                                            (if ((b__0 == (0x3A7 : (BitVec 12))) : Bool)
                                                                                            then
                                                                                              true
                                                                                            else
                                                                                              (if ((b__0 == (0x3A8 : (BitVec 12))) : Bool)
                                                                                              then
                                                                                                true
                                                                                              else
                                                                                                (if ((b__0 == (0x3A9 : (BitVec 12))) : Bool)
                                                                                                then
                                                                                                  true
                                                                                                else
                                                                                                  (if ((b__0 == (0x3AA : (BitVec 12))) : Bool)
                                                                                                  then
                                                                                                    true
                                                                                                  else
                                                                                                    (if ((b__0 == (0x3AB : (BitVec 12))) : Bool)
                                                                                                    then
                                                                                                      true
                                                                                                    else
                                                                                                      (if ((b__0 == (0x3AC : (BitVec 12))) : Bool)
                                                                                                      then
                                                                                                        true
                                                                                                      else
                                                                                                        (if ((b__0 == (0x3AD : (BitVec 12))) : Bool)
                                                                                                        then
                                                                                                          true
                                                                                                        else
                                                                                                          (if ((b__0 == (0x3AE : (BitVec 12))) : Bool)
                                                                                                          then
                                                                                                            true
                                                                                                          else
                                                                                                            (if ((b__0 == (0x3AF : (BitVec 12))) : Bool)
                                                                                                            then
                                                                                                              true
                                                                                                            else
                                                                                                              (if ((b__0 == (0x3B0 : (BitVec 12))) : Bool)
                                                                                                              then
                                                                                                                true
                                                                                                              else
                                                                                                                (if ((b__0 == (0x3B1 : (BitVec 12))) : Bool)
                                                                                                                then
                                                                                                                  true
                                                                                                                else
                                                                                                                  (if ((b__0 == (0x3B2 : (BitVec 12))) : Bool)
                                                                                                                  then
                                                                                                                    true
                                                                                                                  else
                                                                                                                    (if ((b__0 == (0x3B3 : (BitVec 12))) : Bool)
                                                                                                                    then
                                                                                                                      true
                                                                                                                    else
                                                                                                                      (if ((b__0 == (0x3B4 : (BitVec 12))) : Bool)
                                                                                                                      then
                                                                                                                        true
                                                                                                                      else
                                                                                                                        (if ((b__0 == (0x3B5 : (BitVec 12))) : Bool)
                                                                                                                        then
                                                                                                                          true
                                                                                                                        else
                                                                                                                          (if ((b__0 == (0x3B6 : (BitVec 12))) : Bool)
                                                                                                                          then
                                                                                                                            true
                                                                                                                          else
                                                                                                                            (if ((b__0 == (0x3B7 : (BitVec 12))) : Bool)
                                                                                                                            then
                                                                                                                              true
                                                                                                                            else
                                                                                                                              (if ((b__0 == (0x3B8 : (BitVec 12))) : Bool)
                                                                                                                              then
                                                                                                                                true
                                                                                                                              else
                                                                                                                                (if ((b__0 == (0x3B9 : (BitVec 12))) : Bool)
                                                                                                                                then
                                                                                                                                  true
                                                                                                                                else
                                                                                                                                  (if ((b__0 == (0x3BA : (BitVec 12))) : Bool)
                                                                                                                                  then
                                                                                                                                    true
                                                                                                                                  else
                                                                                                                                    (if ((b__0 == (0x3BB : (BitVec 12))) : Bool)
                                                                                                                                    then
                                                                                                                                      true
                                                                                                                                    else
                                                                                                                                      (if ((b__0 == (0x3BC : (BitVec 12))) : Bool)
                                                                                                                                      then
                                                                                                                                        true
                                                                                                                                      else
                                                                                                                                        (if ((b__0 == (0x3BD : (BitVec 12))) : Bool)
                                                                                                                                        then
                                                                                                                                          true
                                                                                                                                        else
                                                                                                                                          (if ((b__0 == (0x3BE : (BitVec 12))) : Bool)
                                                                                                                                          then
                                                                                                                                            true
                                                                                                                                          else
                                                                                                                                            (if ((b__0 == (0x3BF : (BitVec 12))) : Bool)
                                                                                                                                            then
                                                                                                                                              true
                                                                                                                                            else
                                                                                                                                              (if ((b__0 == (0x3C0 : (BitVec 12))) : Bool)
                                                                                                                                              then
                                                                                                                                                true
                                                                                                                                              else
                                                                                                                                                (if ((b__0 == (0x3C1 : (BitVec 12))) : Bool)
                                                                                                                                                then
                                                                                                                                                  true
                                                                                                                                                else
                                                                                                                                                  (if ((b__0 == (0x3C2 : (BitVec 12))) : Bool)
                                                                                                                                                  then
                                                                                                                                                    true
                                                                                                                                                  else
                                                                                                                                                    (if ((b__0 == (0x3C3 : (BitVec 12))) : Bool)
                                                                                                                                                    then
                                                                                                                                                      true
                                                                                                                                                    else
                                                                                                                                                      (if ((b__0 == (0x3C4 : (BitVec 12))) : Bool)
                                                                                                                                                      then
                                                                                                                                                        true
                                                                                                                                                      else
                                                                                                                                                        (if ((b__0 == (0x3C5 : (BitVec 12))) : Bool)
                                                                                                                                                        then
                                                                                                                                                          true
                                                                                                                                                        else
                                                                                                                                                          (if ((b__0 == (0x3C6 : (BitVec 12))) : Bool)
                                                                                                                                                          then
                                                                                                                                                            true
                                                                                                                                                          else
                                                                                                                                                            (if ((b__0 == (0x3C7 : (BitVec 12))) : Bool)
                                                                                                                                                            then
                                                                                                                                                              true
                                                                                                                                                            else
                                                                                                                                                              (if ((b__0 == (0x3C8 : (BitVec 12))) : Bool)
                                                                                                                                                              then
                                                                                                                                                                true
                                                                                                                                                              else
                                                                                                                                                                (if ((b__0 == (0x3C9 : (BitVec 12))) : Bool)
                                                                                                                                                                then
                                                                                                                                                                  true
                                                                                                                                                                else
                                                                                                                                                                  (if ((b__0 == (0x3CA : (BitVec 12))) : Bool)
                                                                                                                                                                  then
                                                                                                                                                                    true
                                                                                                                                                                  else
                                                                                                                                                                    (if ((b__0 == (0x3CB : (BitVec 12))) : Bool)
                                                                                                                                                                    then
                                                                                                                                                                      true
                                                                                                                                                                    else
                                                                                                                                                                      (if ((b__0 == (0x3CC : (BitVec 12))) : Bool)
                                                                                                                                                                      then
                                                                                                                                                                        true
                                                                                                                                                                      else
                                                                                                                                                                        (if ((b__0 == (0x3CD : (BitVec 12))) : Bool)
                                                                                                                                                                        then
                                                                                                                                                                          true
                                                                                                                                                                        else
                                                                                                                                                                          (if ((b__0 == (0x3CE : (BitVec 12))) : Bool)
                                                                                                                                                                          then
                                                                                                                                                                            true
                                                                                                                                                                          else
                                                                                                                                                                            (if ((b__0 == (0x3CF : (BitVec 12))) : Bool)
                                                                                                                                                                            then
                                                                                                                                                                              true
                                                                                                                                                                            else
                                                                                                                                                                              (if ((b__0 == (0x3D0 : (BitVec 12))) : Bool)
                                                                                                                                                                              then
                                                                                                                                                                                true
                                                                                                                                                                              else
                                                                                                                                                                                (if ((b__0 == (0x3D1 : (BitVec 12))) : Bool)
                                                                                                                                                                                then
                                                                                                                                                                                  true
                                                                                                                                                                                else
                                                                                                                                                                                  (if ((b__0 == (0x3D2 : (BitVec 12))) : Bool)
                                                                                                                                                                                  then
                                                                                                                                                                                    true
                                                                                                                                                                                  else
                                                                                                                                                                                    (if ((b__0 == (0x3D3 : (BitVec 12))) : Bool)
                                                                                                                                                                                    then
                                                                                                                                                                                      true
                                                                                                                                                                                    else
                                                                                                                                                                                      (if ((b__0 == (0x3D4 : (BitVec 12))) : Bool)
                                                                                                                                                                                      then
                                                                                                                                                                                        true
                                                                                                                                                                                      else
                                                                                                                                                                                        (if ((b__0 == (0x3D5 : (BitVec 12))) : Bool)
                                                                                                                                                                                        then
                                                                                                                                                                                          true
                                                                                                                                                                                        else
                                                                                                                                                                                          (if ((b__0 == (0x3D6 : (BitVec 12))) : Bool)
                                                                                                                                                                                          then
                                                                                                                                                                                            true
                                                                                                                                                                                          else
                                                                                                                                                                                            (if ((b__0 == (0x3D7 : (BitVec 12))) : Bool)
                                                                                                                                                                                            then
                                                                                                                                                                                              true
                                                                                                                                                                                            else
                                                                                                                                                                                              (if ((b__0 == (0x3D8 : (BitVec 12))) : Bool)
                                                                                                                                                                                              then
                                                                                                                                                                                                true
                                                                                                                                                                                              else
                                                                                                                                                                                                (if ((b__0 == (0x3D9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                then
                                                                                                                                                                                                  true
                                                                                                                                                                                                else
                                                                                                                                                                                                  (if ((b__0 == (0x3DA : (BitVec 12))) : Bool)
                                                                                                                                                                                                  then
                                                                                                                                                                                                    true
                                                                                                                                                                                                  else
                                                                                                                                                                                                    (if ((b__0 == (0x3DB : (BitVec 12))) : Bool)
                                                                                                                                                                                                    then
                                                                                                                                                                                                      true
                                                                                                                                                                                                    else
                                                                                                                                                                                                      (if ((b__0 == (0x3DC : (BitVec 12))) : Bool)
                                                                                                                                                                                                      then
                                                                                                                                                                                                        true
                                                                                                                                                                                                      else
                                                                                                                                                                                                        (if ((b__0 == (0x3DD : (BitVec 12))) : Bool)
                                                                                                                                                                                                        then
                                                                                                                                                                                                          true
                                                                                                                                                                                                        else
                                                                                                                                                                                                          (if ((b__0 == (0x3DE : (BitVec 12))) : Bool)
                                                                                                                                                                                                          then
                                                                                                                                                                                                            true
                                                                                                                                                                                                          else
                                                                                                                                                                                                            (if ((b__0 == (0x3DF : (BitVec 12))) : Bool)
                                                                                                                                                                                                            then
                                                                                                                                                                                                              true
                                                                                                                                                                                                            else
                                                                                                                                                                                                              (if ((b__0 == (0x3E0 : (BitVec 12))) : Bool)
                                                                                                                                                                                                              then
                                                                                                                                                                                                                true
                                                                                                                                                                                                              else
                                                                                                                                                                                                                (if ((b__0 == (0x3E1 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                then
                                                                                                                                                                                                                  true
                                                                                                                                                                                                                else
                                                                                                                                                                                                                  (if ((b__0 == (0x3E2 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                  then
                                                                                                                                                                                                                    true
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    (if ((b__0 == (0x3E3 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                    then
                                                                                                                                                                                                                      true
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      (if ((b__0 == (0x3E4 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                      then
                                                                                                                                                                                                                        true
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        (if ((b__0 == (0x3E5 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                        then
                                                                                                                                                                                                                          true
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                          (if ((b__0 == (0x3E6 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                          then
                                                                                                                                                                                                                            true
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            (if ((b__0 == (0x3E7 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                            then
                                                                                                                                                                                                                              true
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                              (if ((b__0 == (0x3E8 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                true
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                (if ((b__0 == (0x3E9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                then
                                                                                                                                                                                                                                  true
                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                  (if ((b__0 == (0x3EA : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                    true
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    (if ((b__0 == (0x3EB : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                    then
                                                                                                                                                                                                                                      true
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                      (if ((b__0 == (0x3EC : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                        true
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        (if ((b__0 == (0x3ED : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                        then
                                                                                                                                                                                                                                          true
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                          (if ((b__0 == (0x3EE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                            true
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            (if ((b__0 == (0x3EF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                            then
                                                                                                                                                                                                                                              true
                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                              (if ((b__0 == (0x001 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                true
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                (if ((b__0 == (0x002 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                then
                                                                                                                                                                                                                                                  true
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  (if ((b__0 == (0x003 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                    true
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    (if ((b__0 == (0x008 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                    then
                                                                                                                                                                                                                                                      true
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      (if ((b__0 == (0x009 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                        true
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        (if ((b__0 == (0x00A : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                        then
                                                                                                                                                                                                                                                          true
                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                          (if ((b__0 == (0x00F : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                            true
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            (if ((b__0 == (0xC20 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                            then
                                                                                                                                                                                                                                                              true
                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                              (if ((b__0 == (0xC21 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                true
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                (if ((b__0 == (0xC22 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                then
                                                                                                                                                                                                                                                                  true
                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                  (if ((b__0 == (0x321 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                    true
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    (if ((b__0 == (0x721 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                    then
                                                                                                                                                                                                                                                                      true
                                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                                      (if ((b__0 == (0x322 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                        true
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        (if ((b__0 == (0x722 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                        then
                                                                                                                                                                                                                                                                          true
                                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                                          (if ((b__0 == (0x180 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                            true
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            false))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))

def csr_name_map_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "misa" => true
  | "mstatus" => true
  | "mstatush" => true
  | "mseccfg" => true
  | "mseccfgh" => true
  | "menvcfg" => true
  | "menvcfgh" => true
  | "senvcfg" => true
  | "mie" => true
  | "mip" => true
  | "medeleg" => true
  | "medelegh" => true
  | "mideleg" => true
  | "mcause" => true
  | "mtval" => true
  | "mscratch" => true
  | "scounteren" => true
  | "mcounteren" => true
  | "mcountinhibit" => true
  | "mvendorid" => true
  | "marchid" => true
  | "mimpid" => true
  | "mhartid" => true
  | "mconfigptr" => true
  | "sstatus" => true
  | "sip" => true
  | "sie" => true
  | "sscratch" => true
  | "scause" => true
  | "stval" => true
  | "tselect" => true
  | "tdata1" => true
  | "tdata2" => true
  | "tdata3" => true
  | "stvec" => true
  | "sepc" => true
  | "mtvec" => true
  | "mepc" => true
  | "pmpcfg0" => true
  | "pmpcfg1" => true
  | "pmpcfg2" => true
  | "pmpcfg3" => true
  | "pmpcfg4" => true
  | "pmpcfg5" => true
  | "pmpcfg6" => true
  | "pmpcfg7" => true
  | "pmpcfg8" => true
  | "pmpcfg9" => true
  | "pmpcfg10" => true
  | "pmpcfg11" => true
  | "pmpcfg12" => true
  | "pmpcfg13" => true
  | "pmpcfg14" => true
  | "pmpcfg15" => true
  | "pmpaddr0" => true
  | "pmpaddr1" => true
  | "pmpaddr2" => true
  | "pmpaddr3" => true
  | "pmpaddr4" => true
  | "pmpaddr5" => true
  | "pmpaddr6" => true
  | "pmpaddr7" => true
  | "pmpaddr8" => true
  | "pmpaddr9" => true
  | "pmpaddr10" => true
  | "pmpaddr11" => true
  | "pmpaddr12" => true
  | "pmpaddr13" => true
  | "pmpaddr14" => true
  | "pmpaddr15" => true
  | "pmpaddr16" => true
  | "pmpaddr17" => true
  | "pmpaddr18" => true
  | "pmpaddr19" => true
  | "pmpaddr20" => true
  | "pmpaddr21" => true
  | "pmpaddr22" => true
  | "pmpaddr23" => true
  | "pmpaddr24" => true
  | "pmpaddr25" => true
  | "pmpaddr26" => true
  | "pmpaddr27" => true
  | "pmpaddr28" => true
  | "pmpaddr29" => true
  | "pmpaddr30" => true
  | "pmpaddr31" => true
  | "pmpaddr32" => true
  | "pmpaddr33" => true
  | "pmpaddr34" => true
  | "pmpaddr35" => true
  | "pmpaddr36" => true
  | "pmpaddr37" => true
  | "pmpaddr38" => true
  | "pmpaddr39" => true
  | "pmpaddr40" => true
  | "pmpaddr41" => true
  | "pmpaddr42" => true
  | "pmpaddr43" => true
  | "pmpaddr44" => true
  | "pmpaddr45" => true
  | "pmpaddr46" => true
  | "pmpaddr47" => true
  | "pmpaddr48" => true
  | "pmpaddr49" => true
  | "pmpaddr50" => true
  | "pmpaddr51" => true
  | "pmpaddr52" => true
  | "pmpaddr53" => true
  | "pmpaddr54" => true
  | "pmpaddr55" => true
  | "pmpaddr56" => true
  | "pmpaddr57" => true
  | "pmpaddr58" => true
  | "pmpaddr59" => true
  | "pmpaddr60" => true
  | "pmpaddr61" => true
  | "pmpaddr62" => true
  | "pmpaddr63" => true
  | "fflags" => true
  | "frm" => true
  | "fcsr" => true
  | "vstart" => true
  | "vxsat" => true
  | "vxrm" => true
  | "vcsr" => true
  | "vl" => true
  | "vtype" => true
  | "vlenb" => true
  | "mcyclecfg" => true
  | "mcyclecfgh" => true
  | "minstretcfg" => true
  | "minstretcfgh" => true
  | "satp" => true
  | _ => false

def read_CSR (b__0 : (BitVec 12)) : SailM (BitVec 64) := do
  if ((b__0 == (0x301 : (BitVec 12))) : Bool)
  then readReg misa
  else
    (do
      if ((b__0 == (0x300 : (BitVec 12))) : Bool)
      then (pure (Sail.BitVec.extractLsb (← readReg mstatus) (xlen -i 1) 0))
      else
        (do
          if (((b__0 == (0x310 : (BitVec 12))) && (xlen == 32)) : Bool)
          then (pure (Sail.BitVec.extractLsb (← readReg mstatus) 63 32))
          else
            (do
              if ((b__0 == (0x747 : (BitVec 12))) : Bool)
              then (pure (Sail.BitVec.extractLsb (← readReg mseccfg) (xlen -i 1) 0))
              else
                (do
                  if (((b__0 == (0x757 : (BitVec 12))) && (xlen == 32)) : Bool)
                  then (pure (Sail.BitVec.extractLsb (← readReg mseccfg) 63 32))
                  else
                    (do
                      if ((b__0 == (0x30A : (BitVec 12))) : Bool)
                      then (pure (Sail.BitVec.extractLsb (← readReg menvcfg) (xlen -i 1) 0))
                      else
                        (do
                          if (((b__0 == (0x31A : (BitVec 12))) && (xlen == 32)) : Bool)
                          then (pure (Sail.BitVec.extractLsb (← readReg menvcfg) 63 32))
                          else
                            (do
                              if ((b__0 == (0x10A : (BitVec 12))) : Bool)
                              then
                                (pure (Sail.BitVec.extractLsb (← readReg senvcfg) (xlen -i 1) 0))
                              else
                                (do
                                  if ((b__0 == (0x304 : (BitVec 12))) : Bool)
                                  then readReg mie
                                  else
                                    (do
                                      if ((b__0 == (0x344 : (BitVec 12))) : Bool)
                                      then readReg mip
                                      else
                                        (do
                                          if ((b__0 == (0x302 : (BitVec 12))) : Bool)
                                          then
                                            (pure (Sail.BitVec.extractLsb (← readReg medeleg)
                                                (xlen -i 1) 0))
                                          else
                                            (do
                                              if (((b__0 == (0x312 : (BitVec 12))) && (xlen == 32)) : Bool)
                                              then
                                                (pure (Sail.BitVec.extractLsb (← readReg medeleg)
                                                    63 32))
                                              else
                                                (do
                                                  if ((b__0 == (0x303 : (BitVec 12))) : Bool)
                                                  then readReg mideleg
                                                  else
                                                    (do
                                                      if ((b__0 == (0x342 : (BitVec 12))) : Bool)
                                                      then readReg mcause
                                                      else
                                                        (do
                                                          if ((b__0 == (0x343 : (BitVec 12))) : Bool)
                                                          then readReg mtval
                                                          else
                                                            (do
                                                              if ((b__0 == (0x340 : (BitVec 12))) : Bool)
                                                              then readReg mscratch
                                                              else
                                                                (do
                                                                  if ((b__0 == (0x106 : (BitVec 12))) : Bool)
                                                                  then
                                                                    (pure (zero_extend (m := 64)
                                                                        (← readReg scounteren)))
                                                                  else
                                                                    (do
                                                                      if ((b__0 == (0x306 : (BitVec 12))) : Bool)
                                                                      then
                                                                        (pure (zero_extend (m := 64)
                                                                            (← readReg mcounteren)))
                                                                      else
                                                                        (do
                                                                          if ((b__0 == (0x320 : (BitVec 12))) : Bool)
                                                                          then
                                                                            (pure (zero_extend
                                                                                (m := 64)
                                                                                (← readReg mcountinhibit)))
                                                                          else
                                                                            (do
                                                                              if ((b__0 == (0xF11 : (BitVec 12))) : Bool)
                                                                              then
                                                                                (pure (zero_extend
                                                                                    (m := 64)
                                                                                    (← readReg mvendorid)))
                                                                              else
                                                                                (do
                                                                                  if ((b__0 == (0xF12 : (BitVec 12))) : Bool)
                                                                                  then
                                                                                    readReg marchid
                                                                                  else
                                                                                    (do
                                                                                      if ((b__0 == (0xF13 : (BitVec 12))) : Bool)
                                                                                      then
                                                                                        readReg mimpid
                                                                                      else
                                                                                        (do
                                                                                          if ((b__0 == (0xF14 : (BitVec 12))) : Bool)
                                                                                          then
                                                                                            readReg mhartid
                                                                                          else
                                                                                            (do
                                                                                              if ((b__0 == (0xF15 : (BitVec 12))) : Bool)
                                                                                              then
                                                                                                readReg mconfigptr
                                                                                              else
                                                                                                (do
                                                                                                  if ((b__0 == (0x100 : (BitVec 12))) : Bool)
                                                                                                  then
                                                                                                    (pure (Sail.BitVec.extractLsb
                                                                                                        (lower_mstatus
                                                                                                          (← readReg mstatus))
                                                                                                        (xlen -i 1)
                                                                                                        0))
                                                                                                  else
                                                                                                    (do
                                                                                                      if ((b__0 == (0x144 : (BitVec 12))) : Bool)
                                                                                                      then
                                                                                                        (pure (lower_mip
                                                                                                            (← readReg mip)
                                                                                                            (← readReg mideleg)))
                                                                                                      else
                                                                                                        (do
                                                                                                          if ((b__0 == (0x104 : (BitVec 12))) : Bool)
                                                                                                          then
                                                                                                            (pure (lower_mie
                                                                                                                (← readReg mie)
                                                                                                                (← readReg mideleg)))
                                                                                                          else
                                                                                                            (do
                                                                                                              if ((b__0 == (0x140 : (BitVec 12))) : Bool)
                                                                                                              then
                                                                                                                readReg sscratch
                                                                                                              else
                                                                                                                (do
                                                                                                                  if ((b__0 == (0x142 : (BitVec 12))) : Bool)
                                                                                                                  then
                                                                                                                    readReg scause
                                                                                                                  else
                                                                                                                    (do
                                                                                                                      if ((b__0 == (0x143 : (BitVec 12))) : Bool)
                                                                                                                      then
                                                                                                                        readReg stval
                                                                                                                      else
                                                                                                                        (do
                                                                                                                          if ((b__0 == (0x7A0 : (BitVec 12))) : Bool)
                                                                                                                          then
                                                                                                                            (pure (Complement.complement
                                                                                                                                (← readReg tselect)))
                                                                                                                          else
                                                                                                                            (do
                                                                                                                              if ((b__0 == (0x105 : (BitVec 12))) : Bool)
                                                                                                                              then
                                                                                                                                (get_stvec
                                                                                                                                  ())
                                                                                                                              else
                                                                                                                                (do
                                                                                                                                  if ((b__0 == (0x141 : (BitVec 12))) : Bool)
                                                                                                                                  then
                                                                                                                                    (get_xepc
                                                                                                                                      Supervisor)
                                                                                                                                  else
                                                                                                                                    (do
                                                                                                                                      if ((b__0 == (0x305 : (BitVec 12))) : Bool)
                                                                                                                                      then
                                                                                                                                        (get_mtvec
                                                                                                                                          ())
                                                                                                                                      else
                                                                                                                                        (do
                                                                                                                                          if ((b__0 == (0x341 : (BitVec 12))) : Bool)
                                                                                                                                          then
                                                                                                                                            (get_xepc
                                                                                                                                              Machine)
                                                                                                                                          else
                                                                                                                                            (do
                                                                                                                                              if ((((Sail.BitVec.extractLsb
                                                                                                                                                       b__0
                                                                                                                                                       11
                                                                                                                                                       4) == (0x3A : (BitVec 8))) && (let idx : (BitVec 4) :=
                                                                                                                                                     (Sail.BitVec.extractLsb
                                                                                                                                                       b__0
                                                                                                                                                       3
                                                                                                                                                       0)
                                                                                                                                                   (((BitVec.access
                                                                                                                                                         idx
                                                                                                                                                         0) == 0#1) || (xlen == 32)))) : Bool)
                                                                                                                                              then
                                                                                                                                                (do
                                                                                                                                                  let idx : (BitVec 4) :=
                                                                                                                                                    (Sail.BitVec.extractLsb
                                                                                                                                                      b__0
                                                                                                                                                      3
                                                                                                                                                      0)
                                                                                                                                                  (pmpReadCfgReg
                                                                                                                                                    (BitVec.toNat
                                                                                                                                                      idx)))
                                                                                                                                              else
                                                                                                                                                (do
                                                                                                                                                  if (((Sail.BitVec.extractLsb
                                                                                                                                                         b__0
                                                                                                                                                         11
                                                                                                                                                         4) == (0x3B : (BitVec 8))) : Bool)
                                                                                                                                                  then
                                                                                                                                                    (do
                                                                                                                                                      let idx : (BitVec 4) :=
                                                                                                                                                        (Sail.BitVec.extractLsb
                                                                                                                                                          b__0
                                                                                                                                                          3
                                                                                                                                                          0)
                                                                                                                                                      (pmpReadAddrReg
                                                                                                                                                        (BitVec.toNat
                                                                                                                                                          ((0b00 : (BitVec 2)) ++ idx))))
                                                                                                                                                  else
                                                                                                                                                    (do
                                                                                                                                                      if (((Sail.BitVec.extractLsb
                                                                                                                                                             b__0
                                                                                                                                                             11
                                                                                                                                                             4) == (0x3C : (BitVec 8))) : Bool)
                                                                                                                                                      then
                                                                                                                                                        (do
                                                                                                                                                          let idx : (BitVec 4) :=
                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                              b__0
                                                                                                                                                              3
                                                                                                                                                              0)
                                                                                                                                                          (pmpReadAddrReg
                                                                                                                                                            (BitVec.toNat
                                                                                                                                                              ((0b01 : (BitVec 2)) ++ idx))))
                                                                                                                                                      else
                                                                                                                                                        (do
                                                                                                                                                          if (((Sail.BitVec.extractLsb
                                                                                                                                                                 b__0
                                                                                                                                                                 11
                                                                                                                                                                 4) == (0x3D : (BitVec 8))) : Bool)
                                                                                                                                                          then
                                                                                                                                                            (do
                                                                                                                                                              let idx : (BitVec 4) :=
                                                                                                                                                                (Sail.BitVec.extractLsb
                                                                                                                                                                  b__0
                                                                                                                                                                  3
                                                                                                                                                                  0)
                                                                                                                                                              (pmpReadAddrReg
                                                                                                                                                                (BitVec.toNat
                                                                                                                                                                  ((0b10 : (BitVec 2)) ++ idx))))
                                                                                                                                                          else
                                                                                                                                                            (do
                                                                                                                                                              if (((Sail.BitVec.extractLsb
                                                                                                                                                                     b__0
                                                                                                                                                                     11
                                                                                                                                                                     4) == (0x3E : (BitVec 8))) : Bool)
                                                                                                                                                              then
                                                                                                                                                                (do
                                                                                                                                                                  let idx : (BitVec 4) :=
                                                                                                                                                                    (Sail.BitVec.extractLsb
                                                                                                                                                                      b__0
                                                                                                                                                                      3
                                                                                                                                                                      0)
                                                                                                                                                                  (pmpReadAddrReg
                                                                                                                                                                    (BitVec.toNat
                                                                                                                                                                      ((0b11 : (BitVec 2)) ++ idx))))
                                                                                                                                                              else
                                                                                                                                                                (do
                                                                                                                                                                  if ((b__0 == (0x001 : (BitVec 12))) : Bool)
                                                                                                                                                                  then
                                                                                                                                                                    (pure (zero_extend
                                                                                                                                                                        (m := 64)
                                                                                                                                                                        (_get_Fcsr_FFLAGS
                                                                                                                                                                          (← readReg fcsr))))
                                                                                                                                                                  else
                                                                                                                                                                    (do
                                                                                                                                                                      if ((b__0 == (0x002 : (BitVec 12))) : Bool)
                                                                                                                                                                      then
                                                                                                                                                                        (pure (zero_extend
                                                                                                                                                                            (m := 64)
                                                                                                                                                                            (_get_Fcsr_FRM
                                                                                                                                                                              (← readReg fcsr))))
                                                                                                                                                                      else
                                                                                                                                                                        (do
                                                                                                                                                                          if ((b__0 == (0x003 : (BitVec 12))) : Bool)
                                                                                                                                                                          then
                                                                                                                                                                            (pure (zero_extend
                                                                                                                                                                                (m := 64)
                                                                                                                                                                                (← readReg fcsr)))
                                                                                                                                                                          else
                                                                                                                                                                            (do
                                                                                                                                                                              if ((b__0 == (0x008 : (BitVec 12))) : Bool)
                                                                                                                                                                              then
                                                                                                                                                                                readReg vstart
                                                                                                                                                                              else
                                                                                                                                                                                (do
                                                                                                                                                                                  if ((b__0 == (0x009 : (BitVec 12))) : Bool)
                                                                                                                                                                                  then
                                                                                                                                                                                    (pure (zero_extend
                                                                                                                                                                                        (m := 64)
                                                                                                                                                                                        (_get_Vcsr_vxsat
                                                                                                                                                                                          (← readReg vcsr))))
                                                                                                                                                                                  else
                                                                                                                                                                                    (do
                                                                                                                                                                                      if ((b__0 == (0x00A : (BitVec 12))) : Bool)
                                                                                                                                                                                      then
                                                                                                                                                                                        (pure (zero_extend
                                                                                                                                                                                            (m := 64)
                                                                                                                                                                                            (_get_Vcsr_vxrm
                                                                                                                                                                                              (← readReg vcsr))))
                                                                                                                                                                                      else
                                                                                                                                                                                        (do
                                                                                                                                                                                          if ((b__0 == (0x00F : (BitVec 12))) : Bool)
                                                                                                                                                                                          then
                                                                                                                                                                                            (pure (zero_extend
                                                                                                                                                                                                (m := 64)
                                                                                                                                                                                                (← readReg vcsr)))
                                                                                                                                                                                          else
                                                                                                                                                                                            (do
                                                                                                                                                                                              if ((b__0 == (0xC20 : (BitVec 12))) : Bool)
                                                                                                                                                                                              then
                                                                                                                                                                                                readReg vl
                                                                                                                                                                                              else
                                                                                                                                                                                                (do
                                                                                                                                                                                                  if ((b__0 == (0xC21 : (BitVec 12))) : Bool)
                                                                                                                                                                                                  then
                                                                                                                                                                                                    readReg vtype
                                                                                                                                                                                                  else
                                                                                                                                                                                                    (do
                                                                                                                                                                                                      if ((b__0 == (0xC22 : (BitVec 12))) : Bool)
                                                                                                                                                                                                      then
                                                                                                                                                                                                        (pure VLENB)
                                                                                                                                                                                                      else
                                                                                                                                                                                                        (do
                                                                                                                                                                                                          if ((b__0 == (0x321 : (BitVec 12))) : Bool)
                                                                                                                                                                                                          then
                                                                                                                                                                                                            (pure (Sail.BitVec.extractLsb
                                                                                                                                                                                                                (← readReg mcyclecfg)
                                                                                                                                                                                                                (xlen -i 1)
                                                                                                                                                                                                                0))
                                                                                                                                                                                                          else
                                                                                                                                                                                                            (do
                                                                                                                                                                                                              if (((b__0 == (0x721 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                                              then
                                                                                                                                                                                                                (pure (Sail.BitVec.extractLsb
                                                                                                                                                                                                                    (← readReg mcyclecfg)
                                                                                                                                                                                                                    63
                                                                                                                                                                                                                    32))
                                                                                                                                                                                                              else
                                                                                                                                                                                                                (do
                                                                                                                                                                                                                  if ((b__0 == (0x322 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                  then
                                                                                                                                                                                                                    (pure (Sail.BitVec.extractLsb
                                                                                                                                                                                                                        (← readReg minstretcfg)
                                                                                                                                                                                                                        (xlen -i 1)
                                                                                                                                                                                                                        0))
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                      if (((b__0 == (0x722 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                                                      then
                                                                                                                                                                                                                        (pure (Sail.BitVec.extractLsb
                                                                                                                                                                                                                            (← readReg minstretcfg)
                                                                                                                                                                                                                            63
                                                                                                                                                                                                                            32))
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                          if ((b__0 == (0x180 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                          then
                                                                                                                                                                                                                            readReg satp
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                              assert false "Pattern match failure at sys/vmem.sail:168.0-168.38"
                                                                                                                                                                                                                              throw Error.Exit)))))))))))))))))))))))))))))))))))))))))))))))))))))))

def write_CSR (b__0 : (BitVec 12)) (value : (BitVec 64)) : SailM (Result (BitVec 64) Unit) := do
  if ((b__0 == (0x301 : (BitVec 12))) : Bool)
  then
    (do
      writeReg misa (← (legalize_misa (← readReg misa) value))
      (pure (Ok (← readReg misa))))
  else
    (do
      if (((b__0 == (0x300 : (BitVec 12))) && (xlen == 64)) : Bool)
      then
        (do
          writeReg mstatus (← (legalize_mstatus (← readReg mstatus) value))
          (pure (Ok (← readReg mstatus))))
      else
        (do
          if (((b__0 == (0x300 : (BitVec 12))) && (xlen == 32)) : Bool)
          then
            (do
              writeReg mstatus (← (legalize_mstatus (← readReg mstatus)
                  ((Sail.BitVec.extractLsb (← readReg mstatus) 63 32) ++ value)))
              (pure (Ok (Sail.BitVec.extractLsb (← readReg mstatus) 31 0))))
          else
            (do
              if (((b__0 == (0x310 : (BitVec 12))) && (xlen == 32)) : Bool)
              then
                (do
                  writeReg mstatus (← (legalize_mstatus (← readReg mstatus)
                      (value ++ (Sail.BitVec.extractLsb (← readReg mstatus) 31 0))))
                  (pure (Ok (Sail.BitVec.extractLsb (← readReg mstatus) 63 32))))
              else
                (do
                  if (((b__0 == (0x747 : (BitVec 12))) && (xlen == 32)) : Bool)
                  then
                    (do
                      writeReg mseccfg (← (legalize_mseccfg (← readReg mseccfg)
                          ((Sail.BitVec.extractLsb (← readReg mseccfg) 63 32) ++ value)))
                      (pure (Ok (Sail.BitVec.extractLsb (← readReg mseccfg) 31 0))))
                  else
                    (do
                      if (((b__0 == (0x747 : (BitVec 12))) && (xlen == 64)) : Bool)
                      then
                        (do
                          writeReg mseccfg (← (legalize_mseccfg (← readReg mseccfg) value))
                          (pure (Ok (← readReg mseccfg))))
                      else
                        (do
                          if (((b__0 == (0x757 : (BitVec 12))) && (xlen == 32)) : Bool)
                          then
                            (do
                              writeReg mseccfg (← (legalize_mseccfg (← readReg mseccfg)
                                  (value ++ (Sail.BitVec.extractLsb (← readReg mseccfg) 31 0))))
                              (pure (Ok (Sail.BitVec.extractLsb (← readReg mseccfg) 63 32))))
                          else
                            (do
                              if (((b__0 == (0x30A : (BitVec 12))) && (xlen == 32)) : Bool)
                              then
                                (do
                                  writeReg menvcfg (← (legalize_menvcfg (← readReg menvcfg)
                                      ((Sail.BitVec.extractLsb (← readReg menvcfg) 63 32) ++ value)))
                                  (pure (Ok (Sail.BitVec.extractLsb (← readReg menvcfg) 31 0))))
                              else
                                (do
                                  if (((b__0 == (0x30A : (BitVec 12))) && (xlen == 64)) : Bool)
                                  then
                                    (do
                                      writeReg menvcfg (← (legalize_menvcfg (← readReg menvcfg)
                                          value))
                                      (pure (Ok (← readReg menvcfg))))
                                  else
                                    (do
                                      if (((b__0 == (0x31A : (BitVec 12))) && (xlen == 32)) : Bool)
                                      then
                                        (do
                                          writeReg menvcfg (← (legalize_menvcfg
                                              (← readReg menvcfg)
                                              (value ++ (Sail.BitVec.extractLsb
                                                  (← readReg menvcfg) 31 0))))
                                          (pure (Ok
                                              (Sail.BitVec.extractLsb (← readReg menvcfg) 63 32))))
                                      else
                                        (do
                                          if ((b__0 == (0x10A : (BitVec 12))) : Bool)
                                          then
                                            (do
                                              writeReg senvcfg (← (legalize_senvcfg
                                                  (← readReg senvcfg)
                                                  (zero_extend (m := 64) value)))
                                              (pure (Ok
                                                  (Sail.BitVec.extractLsb (← readReg senvcfg)
                                                    (xlen -i 1) 0))))
                                          else
                                            (do
                                              if ((b__0 == (0x304 : (BitVec 12))) : Bool)
                                              then
                                                (do
                                                  writeReg mie (← (legalize_mie (← readReg mie)
                                                      value))
                                                  (pure (Ok (← readReg mie))))
                                              else
                                                (do
                                                  if ((b__0 == (0x344 : (BitVec 12))) : Bool)
                                                  then
                                                    (do
                                                      writeReg mip (← (legalize_mip
                                                          (← readReg mip) value))
                                                      (pure (Ok (← readReg mip))))
                                                  else
                                                    (do
                                                      if (((b__0 == (0x302 : (BitVec 12))) && (xlen == 64)) : Bool)
                                                      then
                                                        (do
                                                          writeReg medeleg (legalize_medeleg
                                                            (← readReg medeleg) value)
                                                          (pure (Ok (← readReg medeleg))))
                                                      else
                                                        (do
                                                          if (((b__0 == (0x302 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                          then
                                                            (do
                                                              writeReg medeleg (legalize_medeleg
                                                                (← readReg medeleg)
                                                                ((Sail.BitVec.extractLsb
                                                                    (← readReg medeleg) 63 32) ++ value))
                                                              (pure (Ok
                                                                  (Sail.BitVec.extractLsb
                                                                    (← readReg medeleg) 31 0))))
                                                          else
                                                            (do
                                                              if (((b__0 == (0x312 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                              then
                                                                (do
                                                                  writeReg medeleg (legalize_medeleg
                                                                    (← readReg medeleg)
                                                                    (value ++ (Sail.BitVec.extractLsb
                                                                        (← readReg medeleg) 31 0)))
                                                                  (pure (Ok
                                                                      (Sail.BitVec.extractLsb
                                                                        (← readReg medeleg) 63 32))))
                                                              else
                                                                (do
                                                                  if ((b__0 == (0x303 : (BitVec 12))) : Bool)
                                                                  then
                                                                    (do
                                                                      writeReg mideleg (legalize_mideleg
                                                                        (← readReg mideleg) value)
                                                                      (pure (Ok
                                                                          (← readReg mideleg))))
                                                                  else
                                                                    (do
                                                                      if ((b__0 == (0x342 : (BitVec 12))) : Bool)
                                                                      then
                                                                        (do
                                                                          writeReg mcause value
                                                                          (pure (Ok
                                                                              (← readReg mcause))))
                                                                      else
                                                                        (do
                                                                          if ((b__0 == (0x343 : (BitVec 12))) : Bool)
                                                                          then
                                                                            (do
                                                                              writeReg mtval value
                                                                              (pure (Ok
                                                                                  (← readReg mtval))))
                                                                          else
                                                                            (do
                                                                              if ((b__0 == (0x340 : (BitVec 12))) : Bool)
                                                                              then
                                                                                (do
                                                                                  writeReg mscratch value
                                                                                  (pure (Ok
                                                                                      (← readReg mscratch))))
                                                                              else
                                                                                (do
                                                                                  if ((b__0 == (0x106 : (BitVec 12))) : Bool)
                                                                                  then
                                                                                    (do
                                                                                      writeReg scounteren (legalize_scounteren
                                                                                        (← readReg scounteren)
                                                                                        value)
                                                                                      (pure (Ok
                                                                                          (zero_extend
                                                                                            (m := 64)
                                                                                            (← readReg scounteren)))))
                                                                                  else
                                                                                    (do
                                                                                      if ((b__0 == (0x306 : (BitVec 12))) : Bool)
                                                                                      then
                                                                                        (do
                                                                                          writeReg mcounteren (legalize_mcounteren
                                                                                            (← readReg mcounteren)
                                                                                            value)
                                                                                          (pure (Ok
                                                                                              (zero_extend
                                                                                                (m := 64)
                                                                                                (← readReg mcounteren)))))
                                                                                      else
                                                                                        (do
                                                                                          if ((b__0 == (0x320 : (BitVec 12))) : Bool)
                                                                                          then
                                                                                            (do
                                                                                              writeReg mcountinhibit (legalize_mcountinhibit
                                                                                                (← readReg mcountinhibit)
                                                                                                value)
                                                                                              (pure (Ok
                                                                                                  (zero_extend
                                                                                                    (m := 64)
                                                                                                    (← readReg mcountinhibit)))))
                                                                                          else
                                                                                            (do
                                                                                              if ((b__0 == (0x100 : (BitVec 12))) : Bool)
                                                                                              then
                                                                                                (do
                                                                                                  writeReg mstatus (← (legalize_sstatus
                                                                                                      (← readReg mstatus)
                                                                                                      value))
                                                                                                  (pure (Ok
                                                                                                      (Sail.BitVec.extractLsb
                                                                                                        (lower_mstatus
                                                                                                          (← readReg mstatus))
                                                                                                        (xlen -i 1)
                                                                                                        0))))
                                                                                              else
                                                                                                (do
                                                                                                  if ((b__0 == (0x144 : (BitVec 12))) : Bool)
                                                                                                  then
                                                                                                    (do
                                                                                                      writeReg mip (legalize_sip
                                                                                                        (← readReg mip)
                                                                                                        (← readReg mideleg)
                                                                                                        value)
                                                                                                      (pure (Ok
                                                                                                          (lower_mip
                                                                                                            (← readReg mip)
                                                                                                            (← readReg mideleg)))))
                                                                                                  else
                                                                                                    (do
                                                                                                      if ((b__0 == (0x104 : (BitVec 12))) : Bool)
                                                                                                      then
                                                                                                        (do
                                                                                                          writeReg mie (legalize_sie
                                                                                                            (← readReg mie)
                                                                                                            (← readReg mideleg)
                                                                                                            value)
                                                                                                          (pure (Ok
                                                                                                              (lower_mie
                                                                                                                (← readReg mie)
                                                                                                                (← readReg mideleg)))))
                                                                                                      else
                                                                                                        (do
                                                                                                          if ((b__0 == (0x140 : (BitVec 12))) : Bool)
                                                                                                          then
                                                                                                            (do
                                                                                                              writeReg sscratch value
                                                                                                              (pure (Ok
                                                                                                                  (← readReg sscratch))))
                                                                                                          else
                                                                                                            (do
                                                                                                              if ((b__0 == (0x142 : (BitVec 12))) : Bool)
                                                                                                              then
                                                                                                                (do
                                                                                                                  writeReg scause value
                                                                                                                  (pure (Ok
                                                                                                                      (← readReg scause))))
                                                                                                              else
                                                                                                                (do
                                                                                                                  if ((b__0 == (0x143 : (BitVec 12))) : Bool)
                                                                                                                  then
                                                                                                                    (do
                                                                                                                      writeReg stval value
                                                                                                                      (pure (Ok
                                                                                                                          (← readReg stval))))
                                                                                                                  else
                                                                                                                    (do
                                                                                                                      if ((b__0 == (0x7A0 : (BitVec 12))) : Bool)
                                                                                                                      then
                                                                                                                        (do
                                                                                                                          writeReg tselect value
                                                                                                                          (pure (Ok
                                                                                                                              (← readReg tselect))))
                                                                                                                      else
                                                                                                                        (do
                                                                                                                          if ((b__0 == (0x105 : (BitVec 12))) : Bool)
                                                                                                                          then
                                                                                                                            (pure (Ok
                                                                                                                                (← (set_stvec
                                                                                                                                    value))))
                                                                                                                          else
                                                                                                                            (do
                                                                                                                              if ((b__0 == (0x141 : (BitVec 12))) : Bool)
                                                                                                                              then
                                                                                                                                (pure (Ok
                                                                                                                                    (← (set_xepc
                                                                                                                                        Supervisor
                                                                                                                                        value))))
                                                                                                                              else
                                                                                                                                (do
                                                                                                                                  if ((b__0 == (0x305 : (BitVec 12))) : Bool)
                                                                                                                                  then
                                                                                                                                    (pure (Ok
                                                                                                                                        (← (set_mtvec
                                                                                                                                            value))))
                                                                                                                                  else
                                                                                                                                    (do
                                                                                                                                      if ((b__0 == (0x341 : (BitVec 12))) : Bool)
                                                                                                                                      then
                                                                                                                                        (pure (Ok
                                                                                                                                            (← (set_xepc
                                                                                                                                                Machine
                                                                                                                                                value))))
                                                                                                                                      else
                                                                                                                                        (do
                                                                                                                                          if ((((Sail.BitVec.extractLsb
                                                                                                                                                   b__0
                                                                                                                                                   11
                                                                                                                                                   4) == (0x3A : (BitVec 8))) && (let idx : (BitVec 4) :=
                                                                                                                                                 (Sail.BitVec.extractLsb
                                                                                                                                                   b__0
                                                                                                                                                   3
                                                                                                                                                   0)
                                                                                                                                               (((BitVec.access
                                                                                                                                                     idx
                                                                                                                                                     0) == 0#1) || (xlen == 32)))) : Bool)
                                                                                                                                          then
                                                                                                                                            (do
                                                                                                                                              let idx : (BitVec 4) :=
                                                                                                                                                (Sail.BitVec.extractLsb
                                                                                                                                                  b__0
                                                                                                                                                  3
                                                                                                                                                  0)
                                                                                                                                              let idx :=
                                                                                                                                                (BitVec.toNat
                                                                                                                                                  idx)
                                                                                                                                              (pmpWriteCfgReg
                                                                                                                                                idx
                                                                                                                                                value)
                                                                                                                                              (pure (Ok
                                                                                                                                                  (← (pmpReadCfgReg
                                                                                                                                                      idx)))))
                                                                                                                                          else
                                                                                                                                            (do
                                                                                                                                              if (((Sail.BitVec.extractLsb
                                                                                                                                                     b__0
                                                                                                                                                     11
                                                                                                                                                     4) == (0x3B : (BitVec 8))) : Bool)
                                                                                                                                              then
                                                                                                                                                (do
                                                                                                                                                  let idx : (BitVec 4) :=
                                                                                                                                                    (Sail.BitVec.extractLsb
                                                                                                                                                      b__0
                                                                                                                                                      3
                                                                                                                                                      0)
                                                                                                                                                  let idx :=
                                                                                                                                                    (BitVec.toNat
                                                                                                                                                      ((0b00 : (BitVec 2)) ++ idx))
                                                                                                                                                  (pmpWriteAddrReg
                                                                                                                                                    idx
                                                                                                                                                    value)
                                                                                                                                                  (pure (Ok
                                                                                                                                                      (← (pmpReadAddrReg
                                                                                                                                                          idx)))))
                                                                                                                                              else
                                                                                                                                                (do
                                                                                                                                                  if (((Sail.BitVec.extractLsb
                                                                                                                                                         b__0
                                                                                                                                                         11
                                                                                                                                                         4) == (0x3C : (BitVec 8))) : Bool)
                                                                                                                                                  then
                                                                                                                                                    (do
                                                                                                                                                      let idx : (BitVec 4) :=
                                                                                                                                                        (Sail.BitVec.extractLsb
                                                                                                                                                          b__0
                                                                                                                                                          3
                                                                                                                                                          0)
                                                                                                                                                      let idx :=
                                                                                                                                                        (BitVec.toNat
                                                                                                                                                          ((0b01 : (BitVec 2)) ++ idx))
                                                                                                                                                      (pmpWriteAddrReg
                                                                                                                                                        idx
                                                                                                                                                        value)
                                                                                                                                                      (pure (Ok
                                                                                                                                                          (← (pmpReadAddrReg
                                                                                                                                                              idx)))))
                                                                                                                                                  else
                                                                                                                                                    (do
                                                                                                                                                      if (((Sail.BitVec.extractLsb
                                                                                                                                                             b__0
                                                                                                                                                             11
                                                                                                                                                             4) == (0x3D : (BitVec 8))) : Bool)
                                                                                                                                                      then
                                                                                                                                                        (do
                                                                                                                                                          let idx : (BitVec 4) :=
                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                              b__0
                                                                                                                                                              3
                                                                                                                                                              0)
                                                                                                                                                          let idx :=
                                                                                                                                                            (BitVec.toNat
                                                                                                                                                              ((0b10 : (BitVec 2)) ++ idx))
                                                                                                                                                          (pmpWriteAddrReg
                                                                                                                                                            idx
                                                                                                                                                            value)
                                                                                                                                                          (pure (Ok
                                                                                                                                                              (← (pmpReadAddrReg
                                                                                                                                                                  idx)))))
                                                                                                                                                      else
                                                                                                                                                        (do
                                                                                                                                                          if (((Sail.BitVec.extractLsb
                                                                                                                                                                 b__0
                                                                                                                                                                 11
                                                                                                                                                                 4) == (0x3E : (BitVec 8))) : Bool)
                                                                                                                                                          then
                                                                                                                                                            (do
                                                                                                                                                              let idx : (BitVec 4) :=
                                                                                                                                                                (Sail.BitVec.extractLsb
                                                                                                                                                                  b__0
                                                                                                                                                                  3
                                                                                                                                                                  0)
                                                                                                                                                              let idx :=
                                                                                                                                                                (BitVec.toNat
                                                                                                                                                                  ((0b11 : (BitVec 2)) ++ idx))
                                                                                                                                                              (pmpWriteAddrReg
                                                                                                                                                                idx
                                                                                                                                                                value)
                                                                                                                                                              (pure (Ok
                                                                                                                                                                  (← (pmpReadAddrReg
                                                                                                                                                                      idx)))))
                                                                                                                                                          else
                                                                                                                                                            (do
                                                                                                                                                              if ((b__0 == (0x001 : (BitVec 12))) : Bool)
                                                                                                                                                              then
                                                                                                                                                                (do
                                                                                                                                                                  (write_fcsr
                                                                                                                                                                    (_get_Fcsr_FRM
                                                                                                                                                                      (← readReg fcsr))
                                                                                                                                                                    (Sail.BitVec.extractLsb
                                                                                                                                                                      value
                                                                                                                                                                      4
                                                                                                                                                                      0))
                                                                                                                                                                  (pure (Ok
                                                                                                                                                                      (zero_extend
                                                                                                                                                                        (m := 64)
                                                                                                                                                                        (_get_Fcsr_FFLAGS
                                                                                                                                                                          (← readReg fcsr))))))
                                                                                                                                                              else
                                                                                                                                                                (do
                                                                                                                                                                  if ((b__0 == (0x002 : (BitVec 12))) : Bool)
                                                                                                                                                                  then
                                                                                                                                                                    (do
                                                                                                                                                                      (write_fcsr
                                                                                                                                                                        (Sail.BitVec.extractLsb
                                                                                                                                                                          value
                                                                                                                                                                          2
                                                                                                                                                                          0)
                                                                                                                                                                        (_get_Fcsr_FFLAGS
                                                                                                                                                                          (← readReg fcsr)))
                                                                                                                                                                      (pure (Ok
                                                                                                                                                                          (zero_extend
                                                                                                                                                                            (m := 64)
                                                                                                                                                                            (_get_Fcsr_FRM
                                                                                                                                                                              (← readReg fcsr))))))
                                                                                                                                                                  else
                                                                                                                                                                    (do
                                                                                                                                                                      if ((b__0 == (0x003 : (BitVec 12))) : Bool)
                                                                                                                                                                      then
                                                                                                                                                                        (do
                                                                                                                                                                          (write_fcsr
                                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                                              value
                                                                                                                                                                              7
                                                                                                                                                                              5)
                                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                                              value
                                                                                                                                                                              4
                                                                                                                                                                              0))
                                                                                                                                                                          (pure (Ok
                                                                                                                                                                              (zero_extend
                                                                                                                                                                                (m := 64)
                                                                                                                                                                                (← readReg fcsr)))))
                                                                                                                                                                      else
                                                                                                                                                                        (do
                                                                                                                                                                          if ((b__0 == (0x008 : (BitVec 12))) : Bool)
                                                                                                                                                                          then
                                                                                                                                                                            (do
                                                                                                                                                                              (set_vstart
                                                                                                                                                                                (Sail.BitVec.extractLsb
                                                                                                                                                                                  value
                                                                                                                                                                                  15
                                                                                                                                                                                  0))
                                                                                                                                                                              (pure (Ok
                                                                                                                                                                                  (← readReg vstart))))
                                                                                                                                                                          else
                                                                                                                                                                            (do
                                                                                                                                                                              if ((b__0 == (0x009 : (BitVec 12))) : Bool)
                                                                                                                                                                              then
                                                                                                                                                                                (do
                                                                                                                                                                                  (ext_write_vcsr
                                                                                                                                                                                    (_get_Vcsr_vxrm
                                                                                                                                                                                      (← readReg vcsr))
                                                                                                                                                                                    (Sail.BitVec.extractLsb
                                                                                                                                                                                      value
                                                                                                                                                                                      0
                                                                                                                                                                                      0))
                                                                                                                                                                                  (pure (Ok
                                                                                                                                                                                      (zero_extend
                                                                                                                                                                                        (m := 64)
                                                                                                                                                                                        (_get_Vcsr_vxsat
                                                                                                                                                                                          (← readReg vcsr))))))
                                                                                                                                                                              else
                                                                                                                                                                                (do
                                                                                                                                                                                  if ((b__0 == (0x00A : (BitVec 12))) : Bool)
                                                                                                                                                                                  then
                                                                                                                                                                                    (do
                                                                                                                                                                                      (ext_write_vcsr
                                                                                                                                                                                        (Sail.BitVec.extractLsb
                                                                                                                                                                                          value
                                                                                                                                                                                          1
                                                                                                                                                                                          0)
                                                                                                                                                                                        (_get_Vcsr_vxsat
                                                                                                                                                                                          (← readReg vcsr)))
                                                                                                                                                                                      (pure (Ok
                                                                                                                                                                                          (zero_extend
                                                                                                                                                                                            (m := 64)
                                                                                                                                                                                            (_get_Vcsr_vxrm
                                                                                                                                                                                              (← readReg vcsr))))))
                                                                                                                                                                                  else
                                                                                                                                                                                    (do
                                                                                                                                                                                      if ((b__0 == (0x00F : (BitVec 12))) : Bool)
                                                                                                                                                                                      then
                                                                                                                                                                                        (do
                                                                                                                                                                                          (ext_write_vcsr
                                                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                                                              value
                                                                                                                                                                                              2
                                                                                                                                                                                              1)
                                                                                                                                                                                            (Sail.BitVec.extractLsb
                                                                                                                                                                                              value
                                                                                                                                                                                              0
                                                                                                                                                                                              0))
                                                                                                                                                                                          (pure (Ok
                                                                                                                                                                                              (zero_extend
                                                                                                                                                                                                (m := 64)
                                                                                                                                                                                                (← readReg vcsr)))))
                                                                                                                                                                                      else
                                                                                                                                                                                        (do
                                                                                                                                                                                          if (((b__0 == (0x321 : (BitVec 12))) && (xlen == 64)) : Bool)
                                                                                                                                                                                          then
                                                                                                                                                                                            (do
                                                                                                                                                                                              writeReg mcyclecfg (← (legalize_smcntrpmf
                                                                                                                                                                                                  (← readReg mcyclecfg)
                                                                                                                                                                                                  value))
                                                                                                                                                                                              (pure (Ok
                                                                                                                                                                                                  (← readReg mcyclecfg))))
                                                                                                                                                                                          else
                                                                                                                                                                                            (do
                                                                                                                                                                                              if (((b__0 == (0x321 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                              then
                                                                                                                                                                                                (do
                                                                                                                                                                                                  writeReg mcyclecfg (← (legalize_smcntrpmf
                                                                                                                                                                                                      (← readReg mcyclecfg)
                                                                                                                                                                                                      ((Sail.BitVec.extractLsb
                                                                                                                                                                                                          (← readReg mcyclecfg)
                                                                                                                                                                                                          63
                                                                                                                                                                                                          32) ++ value)))
                                                                                                                                                                                                  (pure (Ok
                                                                                                                                                                                                      (Sail.BitVec.extractLsb
                                                                                                                                                                                                        (← readReg mcyclecfg)
                                                                                                                                                                                                        (xlen -i 1)
                                                                                                                                                                                                        0))))
                                                                                                                                                                                              else
                                                                                                                                                                                                (do
                                                                                                                                                                                                  if (((b__0 == (0x721 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                                  then
                                                                                                                                                                                                    (do
                                                                                                                                                                                                      writeReg mcyclecfg (← (legalize_smcntrpmf
                                                                                                                                                                                                          (← readReg mcyclecfg)
                                                                                                                                                                                                          (value ++ (Sail.BitVec.extractLsb
                                                                                                                                                                                                              (← readReg mcyclecfg)
                                                                                                                                                                                                              31
                                                                                                                                                                                                              0))))
                                                                                                                                                                                                      (pure (Ok
                                                                                                                                                                                                          (Sail.BitVec.extractLsb
                                                                                                                                                                                                            (← readReg mcyclecfg)
                                                                                                                                                                                                            63
                                                                                                                                                                                                            32))))
                                                                                                                                                                                                  else
                                                                                                                                                                                                    (do
                                                                                                                                                                                                      if (((b__0 == (0x322 : (BitVec 12))) && (xlen == 64)) : Bool)
                                                                                                                                                                                                      then
                                                                                                                                                                                                        (do
                                                                                                                                                                                                          writeReg minstretcfg (← (legalize_smcntrpmf
                                                                                                                                                                                                              (← readReg minstretcfg)
                                                                                                                                                                                                              value))
                                                                                                                                                                                                          (pure (Ok
                                                                                                                                                                                                              (Sail.BitVec.extractLsb
                                                                                                                                                                                                                (← readReg minstretcfg)
                                                                                                                                                                                                                (xlen -i 1)
                                                                                                                                                                                                                0))))
                                                                                                                                                                                                      else
                                                                                                                                                                                                        (do
                                                                                                                                                                                                          if (((b__0 == (0x322 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                                          then
                                                                                                                                                                                                            (do
                                                                                                                                                                                                              writeReg minstretcfg (← (legalize_smcntrpmf
                                                                                                                                                                                                                  (← readReg minstretcfg)
                                                                                                                                                                                                                  ((Sail.BitVec.extractLsb
                                                                                                                                                                                                                      (← readReg minstretcfg)
                                                                                                                                                                                                                      63
                                                                                                                                                                                                                      32) ++ value)))
                                                                                                                                                                                                              (pure (Ok
                                                                                                                                                                                                                  (Sail.BitVec.extractLsb
                                                                                                                                                                                                                    (← readReg minstretcfg)
                                                                                                                                                                                                                    (xlen -i 1)
                                                                                                                                                                                                                    0))))
                                                                                                                                                                                                          else
                                                                                                                                                                                                            (do
                                                                                                                                                                                                              if (((b__0 == (0x722 : (BitVec 12))) && (xlen == 32)) : Bool)
                                                                                                                                                                                                              then
                                                                                                                                                                                                                (do
                                                                                                                                                                                                                  writeReg minstretcfg (← (legalize_smcntrpmf
                                                                                                                                                                                                                      (← readReg minstretcfg)
                                                                                                                                                                                                                      (value ++ (Sail.BitVec.extractLsb
                                                                                                                                                                                                                          (← readReg minstretcfg)
                                                                                                                                                                                                                          31
                                                                                                                                                                                                                          0))))
                                                                                                                                                                                                                  (pure (Ok
                                                                                                                                                                                                                      (Sail.BitVec.extractLsb
                                                                                                                                                                                                                        (← readReg minstretcfg)
                                                                                                                                                                                                                        63
                                                                                                                                                                                                                        32))))
                                                                                                                                                                                                              else
                                                                                                                                                                                                                (do
                                                                                                                                                                                                                  if ((b__0 == (0x180 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                  then
                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                      writeReg satp (← (legalize_satp
                                                                                                                                                                                                                          (← (architecture
                                                                                                                                                                                                                              (← readReg cur_privilege)))
                                                                                                                                                                                                                          (← readReg satp)
                                                                                                                                                                                                                          value))
                                                                                                                                                                                                                      (pure (Ok
                                                                                                                                                                                                                          (← readReg satp))))
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                      assert false "Pattern match failure at sys/vmem.sail:169.0-169.118"
                                                                                                                                                                                                                      throw Error.Exit)))))))))))))))))))))))))))))))))))))))))))))))))))))

/-- Type quantifiers: k_n : Nat, k_n ≥ 0, k_n ∈ {32, 64} -/
def satp_to_asid (satp_val : (BitVec k_n)) : (BitVec (if ( k_n = 32  : Bool) then 9 else 16)) :=
  if (((Sail.BitVec.length satp_val) == 32) : Bool)
  then (_get_Satp32_Asid (Mk_Satp32 satp_val))
  else (_get_Satp64_Asid (Mk_Satp64 satp_val))

/-- Type quantifiers: k_n : Nat, k_n ≥ 0, k_n ∈ {32, 64} -/
def satp_to_ppn (satp_val : (BitVec k_n)) : (BitVec (if ( k_n = 32  : Bool) then 22 else 44)) :=
  if (((Sail.BitVec.length satp_val) == 32) : Bool)
  then (_get_Satp32_PPN (Mk_Satp32 satp_val))
  else (_get_Satp64_PPN (Mk_Satp64 satp_val))

def translationMode (priv : Privilege) : SailM SATPMode := do
  if ((priv == Machine) : Bool)
  then (pure Bare)
  else
    (do
      let arch ← do (architecture Supervisor)
      let mbits ← (( do
        match arch with
        | RV64 =>
          (do
            assert (xlen ≥b 64) "sys/vmem.sail:194.25-194.26"
            (pure (_get_Satp64_Mode (Mk_Satp64 (← readReg satp)))))
        | RV32 =>
          (pure ((0b000 : (BitVec 3)) ++ (_get_Satp32_Mode
                (Mk_Satp32 (Sail.BitVec.extractLsb (← readReg satp) 31 0)))))
        | RV128 => (internal_error "sys/vmem.sail" 198 "RV128 not supported") ) : SailM satp_mode )
      match (satpMode_of_bits arch mbits) with
      | .some m => (pure m)
      | none => (internal_error "sys/vmem.sail" 203 "invalid translation mode in satp"))

/-- Type quantifiers: tlb_index : Nat, k_ex83740# : Bool, k_ex83739# : Bool, sv_width : Nat, is_sv_mode(sv_width), 0
  ≤ tlb_index ∧ tlb_index ≤ (64 - 1) -/
def translate_TLB_hit (sv_width : Nat) (asid : (BitVec (if ( 64 = 32  : Bool) then 9 else 16))) (vpn : (BitVec (sv_width - 12))) (ac : (AccessType Unit)) (priv : Privilege) (mxr : Bool) (do_sum : Bool) (ext_ptw : Unit) (tlb_index : Nat) (ent : TLB_Entry) : SailM (Result ((BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44)) × Unit) (PTW_Error × Unit)) := do
  let pte_size :=
    if ((sv_width == 32) : Bool)
    then 4
    else 8
  let pte := (tlb_get_pte pte_size ent)
  let ext_pte := (ext_bits_of_PTE pte)
  let pte_flags := (Mk_PTE_Flags (Sail.BitVec.extractLsb pte 7 0))
  let pte_check ← do (check_PTE_permission ac priv mxr do_sum pte_flags ext_pte ext_ptw)
  match pte_check with
  | .PTE_Check_Failure (ext_ptw, ext_ptw_fail) =>
    (pure (Err ((ext_get_ptw_error ext_ptw_fail), ext_ptw)))
  | .PTE_Check_Success ext_ptw =>
    (do
      match (update_PTE_Bits pte ac) with
      | none => (pure (Ok ((tlb_get_ppn sv_width ent vpn), ext_ptw)))
      | .some pte' =>
        (do
          if ((not plat_enable_dirty_update) : Bool)
          then (pure (Err ((PTW_PTE_Update ()), ext_ptw)))
          else
            (do
              (write_TLB tlb_index (tlb_set_pte ent pte'))
              match (← (write_pte ent.pteAddr pte_size pte')) with
              | .Ok _ => (pure ())
              | .Err e => (internal_error "sys/vmem.sail" 255 "invalid physical address in TLB")
              (pure (Ok ((tlb_get_ppn sv_width ent vpn), ext_ptw))))))

/-- Type quantifiers: k_ex83761# : Bool, k_ex83760# : Bool, sv_width : Nat, is_sv_mode(sv_width) -/
def translate_TLB_miss (sv_width : Nat) (asid : (BitVec (if ( 64 = 32  : Bool) then 9 else 16))) (base_ppn : (BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44))) (vpn : (BitVec (sv_width - 12))) (ac : (AccessType Unit)) (priv : Privilege) (mxr : Bool) (do_sum : Bool) (ext_ptw : Unit) : SailM (Result ((BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44)) × Unit) (PTW_Error × Unit)) := do
  let initial_level :=
    if ((sv_width == 32) : Bool)
    then 1
    else
      (if ((sv_width == 39) : Bool)
      then 2
      else
        (if ((sv_width == 48) : Bool)
        then 3
        else 4))
  let pte_size :=
    if ((sv_width == 32) : Bool)
    then 4
    else 8
  let ptw_result ← do
    (pt_walk sv_width vpn ac priv mxr do_sum base_ppn initial_level false ext_ptw)
  match ptw_result with
  | .Err (f, ext_ptw) => (pure (Err (f, ext_ptw)))
  | .Ok ({ ppn := ppn, pte := pte, pteAddr := pteAddr, level := level, global := global }, ext_ptw) =>
    (do
      let ext_pte := (ext_bits_of_PTE pte)
      match (update_PTE_Bits pte ac) with
      | none =>
        (do
          (add_to_TLB sv_width asid vpn ppn pte pteAddr level global)
          (pure (Ok (ppn, ext_ptw))))
      | .some pte =>
        (do
          if ((not plat_enable_dirty_update) : Bool)
          then (pure (Err ((PTW_PTE_Update ()), ext_ptw)))
          else
            (do
              match (← (write_pte pteAddr pte_size pte)) with
              | .Ok _ =>
                (do
                  (add_to_TLB sv_width asid vpn ppn pte pteAddr level global)
                  (pure (Ok (ppn, ext_ptw))))
              | .Err e => (pure (Err ((PTW_Access ()), ext_ptw))))))

def satp_mode_width_forwards (arg_ : SATPMode) : SailM Int := do
  match arg_ with
  | Sv32 => (pure 32)
  | Sv39 => (pure 39)
  | Sv48 => (pure 48)
  | Sv57 => (pure 57)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {32, 39, 48, 57} -/
def satp_mode_width_backwards (arg_ : Nat) : SATPMode :=
  match arg_ with
  | 32 => Sv32
  | 39 => Sv39
  | 48 => Sv48
  | _ => Sv57

def satp_mode_width_forwards_matches (arg_ : SATPMode) : Bool :=
  match arg_ with
  | Sv32 => true
  | Sv39 => true
  | Sv48 => true
  | Sv57 => true
  | _ => false

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {32, 39, 48, 57} -/
def satp_mode_width_backwards_matches (arg_ : Nat) : Bool :=
  match arg_ with
  | 32 => true
  | 39 => true
  | 48 => true
  | 57 => true
  | _ => false

/-- Type quantifiers: k_ex83797# : Bool, k_ex83796# : Bool, sv_width : Nat, is_sv_mode(sv_width) -/
def translate (sv_width : Nat) (asid : (BitVec (if ( 64 = 32  : Bool) then 9 else 16))) (base_ppn : (BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44))) (vpn : (BitVec (sv_width - 12))) (ac : (AccessType Unit)) (priv : Privilege) (mxr : Bool) (do_sum : Bool) (ext_ptw : Unit) : SailM (Result ((BitVec (if ( sv_width
  = 32  : Bool) then 22 else 44)) × Unit) (PTW_Error × Unit)) := do
  match (← (lookup_TLB sv_width asid vpn)) with
  | .some (index, ent) => (translate_TLB_hit sv_width asid vpn ac priv mxr do_sum ext_ptw index ent)
  | none => (translate_TLB_miss sv_width asid base_ppn vpn ac priv mxr do_sum ext_ptw)

/-- Type quantifiers: sv_width : Nat, is_sv_mode(sv_width) -/
def get_satp (sv_width : Nat) : SailM (BitVec (if ( sv_width = 32  : Bool) then 32 else 64)) := do
  assert ((sv_width == 32) || (xlen == 64)) "sys/vmem.sail:352.30-352.31"
  if ((sv_width == 32) : Bool)
  then (pure (Sail.BitVec.extractLsb (← readReg satp) 31 0))
  else readReg satp

def translateAddr (vAddr : virtaddr) (ac : (AccessType Unit)) : SailM (Result (physaddr × Unit) (ExceptionType × Unit)) := do
  let effPriv ← do (effectivePrivilege ac (← readReg mstatus) (← readReg cur_privilege))
  let mode ← do (translationMode effPriv)
  if ((mode == Bare) : Bool)
  then (pure (Ok ((Physaddr (zero_extend (m := 64) (bits_of_virtaddr vAddr))), init_ext_ptw)))
  else
    (do
      let sv_width ← do (satp_mode_width_forwards mode)
      let satp_sxlen ← do (get_satp sv_width)
      assert ((sv_width == 32) || (xlen == 64)) "sys/vmem.sail:378.36-378.37"
      let svAddr := (Sail.BitVec.extractLsb (bits_of_virtaddr vAddr) (sv_width -i 1) 0)
      if (((bits_of_virtaddr vAddr) != (sign_extend (m := 64) svAddr)) : Bool)
      then (pure (Err ((translationException ac (PTW_Invalid_Addr ())), init_ext_ptw)))
      else
        (do
          let mxr ← do (pure ((_get_Mstatus_MXR (← readReg mstatus)) == (0b1 : (BitVec 1))))
          let do_sum ← do (pure ((_get_Mstatus_SUM (← readReg mstatus)) == (0b1 : (BitVec 1))))
          let asid := (satp_to_asid satp_sxlen)
          let base_ppn := (satp_to_ppn satp_sxlen)
          let res ← do
            (translate sv_width (zero_extend (m := 16) asid) base_ppn
              (Sail.BitVec.extractLsb svAddr (sv_width -i 1) pagesize_bits) ac effPriv mxr do_sum
              init_ext_ptw)
          match res with
          | .Ok (ppn, ext_ptw) =>
            (let paddr :=
              (ppn ++ (Sail.BitVec.extractLsb (bits_of_virtaddr vAddr) (pagesize_bits -i 1) 0))
            (pure (Ok ((Physaddr (zero_extend (m := 64) paddr)), ext_ptw))))
          | .Err (f, ext_ptw) => (pure (Err ((translationException ac f), ext_ptw)))))

def reset_vmem (_ : Unit) : SailM Unit := do
  (reset_TLB ())

