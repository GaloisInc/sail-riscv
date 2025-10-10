import LeanRV64DExecutable.HexBits
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.SysRegs
import LeanRV64DExecutable.SysExceptions
import LeanRV64DExecutable.PmpRegs
import LeanRV64DExecutable.FdextRegs
import LeanRV64DExecutable.VextRegs
import LeanRV64DExecutable.Smcntrpmf
import LeanRV64DExecutable.Vmem

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
                                                                                                                                                                                                                                                                            true))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))

def csr_name_map_backwards_matches (arg_ : String) : Bool :=
  let head_exp_ := arg_
  match (match head_exp_ with
  | "misa" => (some true)
  | "mstatus" => (some true)
  | "mstatush" => (some true)
  | "mseccfg" => (some true)
  | "mseccfgh" => (some true)
  | "menvcfg" => (some true)
  | "menvcfgh" => (some true)
  | "senvcfg" => (some true)
  | "mie" => (some true)
  | "mip" => (some true)
  | "medeleg" => (some true)
  | "medelegh" => (some true)
  | "mideleg" => (some true)
  | "mcause" => (some true)
  | "mtval" => (some true)
  | "mscratch" => (some true)
  | "scounteren" => (some true)
  | "mcounteren" => (some true)
  | "mcountinhibit" => (some true)
  | "mvendorid" => (some true)
  | "marchid" => (some true)
  | "mimpid" => (some true)
  | "mhartid" => (some true)
  | "mconfigptr" => (some true)
  | "sstatus" => (some true)
  | "sip" => (some true)
  | "sie" => (some true)
  | "sscratch" => (some true)
  | "scause" => (some true)
  | "stval" => (some true)
  | "tselect" => (some true)
  | "tdata1" => (some true)
  | "tdata2" => (some true)
  | "tdata3" => (some true)
  | "stvec" => (some true)
  | "sepc" => (some true)
  | "mtvec" => (some true)
  | "mepc" => (some true)
  | "pmpcfg0" => (some true)
  | "pmpcfg1" => (some true)
  | "pmpcfg2" => (some true)
  | "pmpcfg3" => (some true)
  | "pmpcfg4" => (some true)
  | "pmpcfg5" => (some true)
  | "pmpcfg6" => (some true)
  | "pmpcfg7" => (some true)
  | "pmpcfg8" => (some true)
  | "pmpcfg9" => (some true)
  | "pmpcfg10" => (some true)
  | "pmpcfg11" => (some true)
  | "pmpcfg12" => (some true)
  | "pmpcfg13" => (some true)
  | "pmpcfg14" => (some true)
  | "pmpcfg15" => (some true)
  | "pmpaddr0" => (some true)
  | "pmpaddr1" => (some true)
  | "pmpaddr2" => (some true)
  | "pmpaddr3" => (some true)
  | "pmpaddr4" => (some true)
  | "pmpaddr5" => (some true)
  | "pmpaddr6" => (some true)
  | "pmpaddr7" => (some true)
  | "pmpaddr8" => (some true)
  | "pmpaddr9" => (some true)
  | "pmpaddr10" => (some true)
  | "pmpaddr11" => (some true)
  | "pmpaddr12" => (some true)
  | "pmpaddr13" => (some true)
  | "pmpaddr14" => (some true)
  | "pmpaddr15" => (some true)
  | "pmpaddr16" => (some true)
  | "pmpaddr17" => (some true)
  | "pmpaddr18" => (some true)
  | "pmpaddr19" => (some true)
  | "pmpaddr20" => (some true)
  | "pmpaddr21" => (some true)
  | "pmpaddr22" => (some true)
  | "pmpaddr23" => (some true)
  | "pmpaddr24" => (some true)
  | "pmpaddr25" => (some true)
  | "pmpaddr26" => (some true)
  | "pmpaddr27" => (some true)
  | "pmpaddr28" => (some true)
  | "pmpaddr29" => (some true)
  | "pmpaddr30" => (some true)
  | "pmpaddr31" => (some true)
  | "pmpaddr32" => (some true)
  | "pmpaddr33" => (some true)
  | "pmpaddr34" => (some true)
  | "pmpaddr35" => (some true)
  | "pmpaddr36" => (some true)
  | "pmpaddr37" => (some true)
  | "pmpaddr38" => (some true)
  | "pmpaddr39" => (some true)
  | "pmpaddr40" => (some true)
  | "pmpaddr41" => (some true)
  | "pmpaddr42" => (some true)
  | "pmpaddr43" => (some true)
  | "pmpaddr44" => (some true)
  | "pmpaddr45" => (some true)
  | "pmpaddr46" => (some true)
  | "pmpaddr47" => (some true)
  | "pmpaddr48" => (some true)
  | "pmpaddr49" => (some true)
  | "pmpaddr50" => (some true)
  | "pmpaddr51" => (some true)
  | "pmpaddr52" => (some true)
  | "pmpaddr53" => (some true)
  | "pmpaddr54" => (some true)
  | "pmpaddr55" => (some true)
  | "pmpaddr56" => (some true)
  | "pmpaddr57" => (some true)
  | "pmpaddr58" => (some true)
  | "pmpaddr59" => (some true)
  | "pmpaddr60" => (some true)
  | "pmpaddr61" => (some true)
  | "pmpaddr62" => (some true)
  | "pmpaddr63" => (some true)
  | "fflags" => (some true)
  | "frm" => (some true)
  | "fcsr" => (some true)
  | "vstart" => (some true)
  | "vxsat" => (some true)
  | "vxrm" => (some true)
  | "vcsr" => (some true)
  | "vl" => (some true)
  | "vtype" => (some true)
  | "vlenb" => (some true)
  | "mcyclecfg" => (some true)
  | "mcyclecfgh" => (some true)
  | "minstretcfg" => (some true)
  | "minstretcfgh" => (some true)
  | "satp" => (some true)
  | mapping0_ =>
    (if ((hex_bits_12_backwards_matches mapping0_) : Bool)
    then
      (match (hex_bits_12_backwards mapping0_) with
      | reg => (some true))
    else none)) with
  | .some result => result
  | none =>
    (match head_exp_ with
    | _ => false)

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
                                                                                                                                                                                                                            (internal_error
                                                                                                                                                                                                                              "postlude/csr_end.sail"
                                                                                                                                                                                                                              17
                                                                                                                                                                                                                              (HAppend.hAppend
                                                                                                                                                                                                                                "Read from CSR that does not exist: "
                                                                                                                                                                                                                                (BitVec.toFormatted
                                                                                                                                                                                                                                  b__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))

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
                                                                                                                                                                                                                    (internal_error
                                                                                                                                                                                                                      "postlude/csr_end.sail"
                                                                                                                                                                                                                      23
                                                                                                                                                                                                                      (HAppend.hAppend
                                                                                                                                                                                                                        "Write to CSR that does not exist: "
                                                                                                                                                                                                                        (BitVec.toFormatted
                                                                                                                                                                                                                          b__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))

