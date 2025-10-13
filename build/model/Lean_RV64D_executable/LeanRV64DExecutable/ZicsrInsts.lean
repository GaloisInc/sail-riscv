import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.Callbacks
import LeanRV64DExecutable.Regs
import LeanRV64DExecutable.SysRegs
import LeanRV64DExecutable.ExtRegs
import LeanRV64DExecutable.SysExceptions
import LeanRV64DExecutable.PmpRegs
import LeanRV64DExecutable.FdextRegs
import LeanRV64DExecutable.VextRegs
import LeanRV64DExecutable.Smcntrpmf
import LeanRV64DExecutable.SysControl
import LeanRV64DExecutable.InstRetire
import LeanRV64DExecutable.Vmem
import LeanRV64DExecutable.ZkrControl

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

def encdec_csrop_forwards (arg_ : csrop) : (BitVec 2) :=
  match arg_ with
  | CSRRW => (0b01 : (BitVec 2))
  | CSRRS => (0b10 : (BitVec 2))
  | CSRRC => (0b11 : (BitVec 2))

def encdec_csrop_backwards (arg_ : (BitVec 2)) : SailM csrop := do
  let b__0 := arg_
  if ((b__0 == (0b01 : (BitVec 2))) : Bool)
  then (pure CSRRW)
  else
    (do
      if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then (pure CSRRS)
      else
        (do
          if ((b__0 == (0b11 : (BitVec 2))) : Bool)
          then (pure CSRRC)
          else
            (do
              assert false "Pattern match failure at unknown location"
              throw Error.Exit)))

def encdec_csrop_forwards_matches (arg_ : csrop) : Bool :=
  match arg_ with
  | CSRRW => true
  | CSRRS => true
  | CSRRC => true

def encdec_csrop_backwards_matches (arg_ : (BitVec 2)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b01 : (BitVec 2))) : Bool)
  then true
  else
    (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
    then true
    else
      (if ((b__0 == (0b11 : (BitVec 2))) : Bool)
      then true
      else false))

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
                                                                                                                                                                                                                              if ((b__0 == (0x015 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                (read_seed_csr
                                                                                                                                                                                                                                  ())
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                (internal_error
                                                                                                                                                                                                                                  "postlude/csr_end.sail"
                                                                                                                                                                                                                                  17
                                                                                                                                                                                                                                  (HAppend.hAppend
                                                                                                                                                                                                                                    "Read from CSR that does not exist: "
                                                                                                                                                                                                                                    (BitVec.toFormatted
                                                                                                                                                                                                                                      b__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))

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
                                                                                                                                                                                                                      if ((b__0 == (0x015 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                      then
                                                                                                                                                                                                                        (pure (Ok
                                                                                                                                                                                                                            (write_seed_csr
                                                                                                                                                                                                                              ())))
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        (internal_error
                                                                                                                                                                                                                          "postlude/csr_end.sail"
                                                                                                                                                                                                                          23
                                                                                                                                                                                                                          (HAppend.hAppend
                                                                                                                                                                                                                            "Write to CSR that does not exist: "
                                                                                                                                                                                                                            (BitVec.toFormatted
                                                                                                                                                                                                                              b__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))

/-- Type quantifiers: k_ex93942# : Bool -/
def doCSR (csr : (BitVec 12)) (rs1_val : (BitVec 64)) (rd : regidx) (op : csrop) (is_CSR_Write : Bool) : SailM ExecutionResult := do
  if ((not (← (check_CSR csr (← readReg cur_privilege) is_CSR_Write))) : Bool)
  then (pure (Illegal_Instruction ()))
  else
    (do
      if ((not (ext_check_CSR csr (← readReg cur_privilege) is_CSR_Write)) : Bool)
      then (pure (Ext_CSR_Check_Failure ()))
      else
        (do
          let is_CSR_Read := (not ((op == CSRRW) && (rd == zreg)))
          let csr_val ← (( do
            if (is_CSR_Read : Bool)
            then (read_CSR csr)
            else (pure (zeros (n := 64))) ) : SailM xlenbits )
          if (is_CSR_Write : Bool)
          then
            (do
              let new_val : xlenbits :=
                match op with
                | CSRRW => rs1_val
                | CSRRS => (csr_val ||| rs1_val)
                | CSRRC => (csr_val &&& (Complement.complement rs1_val))
              match (← (write_CSR csr new_val)) with
              | .Ok final_val =>
                (do
                  (csr_id_write_callback csr final_val)
                  (wX_bits rd csr_val)
                  (pure RETIRE_SUCCESS))
              | .Err () => (pure (Illegal_Instruction ())))
          else
            (do
              (csr_id_read_callback csr csr_val)
              (wX_bits rd csr_val)
              (pure RETIRE_SUCCESS))))

def csr_mnemonic_backwards (arg_ : String) : SailM csrop := do
  match arg_ with
  | "csrrw" => (pure CSRRW)
  | "csrrs" => (pure CSRRS)
  | "csrrc" => (pure CSRRC)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def csr_mnemonic_forwards_matches (arg_ : csrop) : Bool :=
  match arg_ with
  | CSRRW => true
  | CSRRS => true
  | CSRRC => true

def csr_mnemonic_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "csrrw" => true
  | "csrrs" => true
  | "csrrc" => true
  | _ => false

