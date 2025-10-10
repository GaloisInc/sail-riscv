import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Extensions
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.Callbacks
import LeanRV64DExecutable.PcAccess
import LeanRV64DExecutable.SysRegs
import LeanRV64DExecutable.SysExceptions
import LeanRV64DExecutable.PmpRegs
import LeanRV64DExecutable.PmpControl
import LeanRV64DExecutable.ZicfilpRegs

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

def effectivePrivilege (t : (AccessType Unit)) (m : (BitVec 64)) (priv : Privilege) : SailM Privilege := do
  bif ((bne t (InstructionFetch ())) && ((_get_Mstatus_MPRV m) == (0b1 : (BitVec 1))))
  then (privLevel_bits_forwards ((_get_Mstatus_MPP m), 0#1))
  else (pure priv)

def csrAccess (csr : (BitVec 12)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb csr 11 10)

def csrPriv (csr : (BitVec 12)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb csr 9 8)

def check_CSR_priv (csr : (BitVec 12)) (p : Privilege) : Bool :=
  (zopz0zKzJ_u (privLevel_to_bits p) (csrPriv csr))

/-- Type quantifiers: k_ex86471# : Bool -/
def check_CSR_access (csr : (BitVec 12)) (isWrite : Bool) : Bool :=
  (not (isWrite && ((csrAccess csr) == (0b11 : (BitVec 2)))))

/-- Type quantifiers: k_ex86481# : Bool -/
def is_CSR_accessible (b__0 : (BitVec 12)) (g__2 : Privilege) (g__3 : Bool) : SailM Bool := do
  bif (b__0 == (0x301 : (BitVec 12)))
  then (pure true)
  else
    (do
      bif (b__0 == (0x300 : (BitVec 12)))
      then (pure true)
      else
        (do
          bif (b__0 == (0x310 : (BitVec 12)))
          then (pure (xlen == 32))
          else
            (do
              bif (b__0 == (0x747 : (BitVec 12)))
              then (pure ((← (currentlyEnabled Ext_Zkr)) || (hartSupports Ext_Zicfilp)))
              else
                (do
                  bif (b__0 == (0x757 : (BitVec 12)))
                  then
                    (pure (((← (currentlyEnabled Ext_Zkr)) || (hartSupports Ext_Zicfilp)) && (xlen == 32)))
                  else
                    (do
                      bif (b__0 == (0x30A : (BitVec 12)))
                      then (currentlyEnabled Ext_U)
                      else
                        (do
                          bif (b__0 == (0x31A : (BitVec 12)))
                          then (pure ((← (currentlyEnabled Ext_U)) && (xlen == 32)))
                          else
                            (do
                              bif (b__0 == (0x10A : (BitVec 12)))
                              then (currentlyEnabled Ext_S)
                              else
                                (do
                                  bif (b__0 == (0x304 : (BitVec 12)))
                                  then (pure true)
                                  else
                                    (do
                                      bif (b__0 == (0x344 : (BitVec 12)))
                                      then (pure true)
                                      else
                                        (do
                                          bif (b__0 == (0x302 : (BitVec 12)))
                                          then (currentlyEnabled Ext_S)
                                          else
                                            (do
                                              bif (b__0 == (0x312 : (BitVec 12)))
                                              then
                                                (pure ((← (currentlyEnabled Ext_S)) && (xlen == 32)))
                                              else
                                                (do
                                                  bif (b__0 == (0x303 : (BitVec 12)))
                                                  then (currentlyEnabled Ext_S)
                                                  else
                                                    (do
                                                      bif (b__0 == (0x342 : (BitVec 12)))
                                                      then (pure true)
                                                      else
                                                        (do
                                                          bif (b__0 == (0x343 : (BitVec 12)))
                                                          then (pure true)
                                                          else
                                                            (do
                                                              bif (b__0 == (0x340 : (BitVec 12)))
                                                              then (pure true)
                                                              else
                                                                (do
                                                                  bif (b__0 == (0x106 : (BitVec 12)))
                                                                  then (currentlyEnabled Ext_S)
                                                                  else
                                                                    (do
                                                                      bif (b__0 == (0x306 : (BitVec 12)))
                                                                      then (currentlyEnabled Ext_U)
                                                                      else
                                                                        (do
                                                                          bif (b__0 == (0x320 : (BitVec 12)))
                                                                          then (pure true)
                                                                          else
                                                                            (do
                                                                              bif (b__0 == (0xF11 : (BitVec 12)))
                                                                              then (pure true)
                                                                              else
                                                                                (do
                                                                                  bif (b__0 == (0xF12 : (BitVec 12)))
                                                                                  then (pure true)
                                                                                  else
                                                                                    (do
                                                                                      bif (b__0 == (0xF13 : (BitVec 12)))
                                                                                      then
                                                                                        (pure true)
                                                                                      else
                                                                                        (do
                                                                                          bif (b__0 == (0xF14 : (BitVec 12)))
                                                                                          then
                                                                                            (pure true)
                                                                                          else
                                                                                            (do
                                                                                              bif (b__0 == (0xF15 : (BitVec 12)))
                                                                                              then
                                                                                                (pure true)
                                                                                              else
                                                                                                (do
                                                                                                  bif (b__0 == (0x100 : (BitVec 12)))
                                                                                                  then
                                                                                                    (currentlyEnabled
                                                                                                      Ext_S)
                                                                                                  else
                                                                                                    (do
                                                                                                      bif (b__0 == (0x144 : (BitVec 12)))
                                                                                                      then
                                                                                                        (currentlyEnabled
                                                                                                          Ext_S)
                                                                                                      else
                                                                                                        (do
                                                                                                          bif (b__0 == (0x104 : (BitVec 12)))
                                                                                                          then
                                                                                                            (currentlyEnabled
                                                                                                              Ext_S)
                                                                                                          else
                                                                                                            (do
                                                                                                              bif (b__0 == (0x140 : (BitVec 12)))
                                                                                                              then
                                                                                                                (currentlyEnabled
                                                                                                                  Ext_S)
                                                                                                              else
                                                                                                                (do
                                                                                                                  bif (b__0 == (0x142 : (BitVec 12)))
                                                                                                                  then
                                                                                                                    (currentlyEnabled
                                                                                                                      Ext_S)
                                                                                                                  else
                                                                                                                    (do
                                                                                                                      bif (b__0 == (0x143 : (BitVec 12)))
                                                                                                                      then
                                                                                                                        (currentlyEnabled
                                                                                                                          Ext_S)
                                                                                                                      else
                                                                                                                        (do
                                                                                                                          bif (b__0 == (0x7A0 : (BitVec 12)))
                                                                                                                          then
                                                                                                                            (pure true)
                                                                                                                          else
                                                                                                                            (do
                                                                                                                              bif (b__0 == (0x105 : (BitVec 12)))
                                                                                                                              then
                                                                                                                                (currentlyEnabled
                                                                                                                                  Ext_S)
                                                                                                                              else
                                                                                                                                (do
                                                                                                                                  bif (b__0 == (0x141 : (BitVec 12)))
                                                                                                                                  then
                                                                                                                                    (currentlyEnabled
                                                                                                                                      Ext_S)
                                                                                                                                  else
                                                                                                                                    (do
                                                                                                                                      bif (b__0 == (0x305 : (BitVec 12)))
                                                                                                                                      then
                                                                                                                                        (pure true)
                                                                                                                                      else
                                                                                                                                        (do
                                                                                                                                          bif (b__0 == (0x341 : (BitVec 12)))
                                                                                                                                          then
                                                                                                                                            (pure true)
                                                                                                                                          else
                                                                                                                                            (do
                                                                                                                                              bif ((Sail.BitVec.extractLsb
                                                                                                                                                     b__0
                                                                                                                                                     11
                                                                                                                                                     4) == (0x3A : (BitVec 8)))
                                                                                                                                              then
                                                                                                                                                (let idx : (BitVec 4) :=
                                                                                                                                                  (Sail.BitVec.extractLsb
                                                                                                                                                    b__0
                                                                                                                                                    3
                                                                                                                                                    0)
                                                                                                                                                (pure ((sys_pmp_count >b (4 *i (BitVec.toNat
                                                                                                                                                          idx))) && (((BitVec.access
                                                                                                                                                          idx
                                                                                                                                                          0) == 0#1) || (xlen == 32)))))
                                                                                                                                              else
                                                                                                                                                (do
                                                                                                                                                  bif ((Sail.BitVec.extractLsb
                                                                                                                                                         b__0
                                                                                                                                                         11
                                                                                                                                                         4) == (0x3B : (BitVec 8)))
                                                                                                                                                  then
                                                                                                                                                    (let idx : (BitVec 4) :=
                                                                                                                                                      (Sail.BitVec.extractLsb
                                                                                                                                                        b__0
                                                                                                                                                        3
                                                                                                                                                        0)
                                                                                                                                                    (pure (sys_pmp_count >b (BitVec.toNat
                                                                                                                                                          ((0b00 : (BitVec 2)) ++ idx)))))
                                                                                                                                                  else
                                                                                                                                                    (do
                                                                                                                                                      bif ((Sail.BitVec.extractLsb
                                                                                                                                                             b__0
                                                                                                                                                             11
                                                                                                                                                             4) == (0x3C : (BitVec 8)))
                                                                                                                                                      then
                                                                                                                                                        (let idx : (BitVec 4) :=
                                                                                                                                                          (Sail.BitVec.extractLsb
                                                                                                                                                            b__0
                                                                                                                                                            3
                                                                                                                                                            0)
                                                                                                                                                        (pure (sys_pmp_count >b (BitVec.toNat
                                                                                                                                                              ((0b01 : (BitVec 2)) ++ idx)))))
                                                                                                                                                      else
                                                                                                                                                        (do
                                                                                                                                                          bif ((Sail.BitVec.extractLsb
                                                                                                                                                                 b__0
                                                                                                                                                                 11
                                                                                                                                                                 4) == (0x3D : (BitVec 8)))
                                                                                                                                                          then
                                                                                                                                                            (let idx : (BitVec 4) :=
                                                                                                                                                              (Sail.BitVec.extractLsb
                                                                                                                                                                b__0
                                                                                                                                                                3
                                                                                                                                                                0)
                                                                                                                                                            (pure (sys_pmp_count >b (BitVec.toNat
                                                                                                                                                                  ((0b10 : (BitVec 2)) ++ idx)))))
                                                                                                                                                          else
                                                                                                                                                            (do
                                                                                                                                                              bif ((Sail.BitVec.extractLsb
                                                                                                                                                                     b__0
                                                                                                                                                                     11
                                                                                                                                                                     4) == (0x3E : (BitVec 8)))
                                                                                                                                                              then
                                                                                                                                                                (let idx : (BitVec 4) :=
                                                                                                                                                                  (Sail.BitVec.extractLsb
                                                                                                                                                                    b__0
                                                                                                                                                                    3
                                                                                                                                                                    0)
                                                                                                                                                                (pure (sys_pmp_count >b (BitVec.toNat
                                                                                                                                                                      ((0b11 : (BitVec 2)) ++ idx)))))
                                                                                                                                                              else
                                                                                                                                                                (do
                                                                                                                                                                  bif (b__0 == (0x001 : (BitVec 12)))
                                                                                                                                                                  then
                                                                                                                                                                    (pure ((← (currentlyEnabled
                                                                                                                                                                            Ext_F)) || (← (currentlyEnabled
                                                                                                                                                                            Ext_Zfinx))))
                                                                                                                                                                  else
                                                                                                                                                                    (do
                                                                                                                                                                      bif (b__0 == (0x002 : (BitVec 12)))
                                                                                                                                                                      then
                                                                                                                                                                        (pure ((← (currentlyEnabled
                                                                                                                                                                                Ext_F)) || (← (currentlyEnabled
                                                                                                                                                                                Ext_Zfinx))))
                                                                                                                                                                      else
                                                                                                                                                                        (do
                                                                                                                                                                          bif (b__0 == (0x003 : (BitVec 12)))
                                                                                                                                                                          then
                                                                                                                                                                            (pure ((← (currentlyEnabled
                                                                                                                                                                                    Ext_F)) || (← (currentlyEnabled
                                                                                                                                                                                    Ext_Zfinx))))
                                                                                                                                                                          else
                                                                                                                                                                            (do
                                                                                                                                                                              bif (b__0 == (0x008 : (BitVec 12)))
                                                                                                                                                                              then
                                                                                                                                                                                (currentlyEnabled
                                                                                                                                                                                  Ext_Zve32x)
                                                                                                                                                                              else
                                                                                                                                                                                (do
                                                                                                                                                                                  bif (b__0 == (0x009 : (BitVec 12)))
                                                                                                                                                                                  then
                                                                                                                                                                                    (currentlyEnabled
                                                                                                                                                                                      Ext_Zve32x)
                                                                                                                                                                                  else
                                                                                                                                                                                    (do
                                                                                                                                                                                      bif (b__0 == (0x00A : (BitVec 12)))
                                                                                                                                                                                      then
                                                                                                                                                                                        (currentlyEnabled
                                                                                                                                                                                          Ext_Zve32x)
                                                                                                                                                                                      else
                                                                                                                                                                                        (do
                                                                                                                                                                                          bif (b__0 == (0x00F : (BitVec 12)))
                                                                                                                                                                                          then
                                                                                                                                                                                            (currentlyEnabled
                                                                                                                                                                                              Ext_Zve32x)
                                                                                                                                                                                          else
                                                                                                                                                                                            (do
                                                                                                                                                                                              bif (b__0 == (0xC20 : (BitVec 12)))
                                                                                                                                                                                              then
                                                                                                                                                                                                (currentlyEnabled
                                                                                                                                                                                                  Ext_Zve32x)
                                                                                                                                                                                              else
                                                                                                                                                                                                (do
                                                                                                                                                                                                  bif (b__0 == (0xC21 : (BitVec 12)))
                                                                                                                                                                                                  then
                                                                                                                                                                                                    (currentlyEnabled
                                                                                                                                                                                                      Ext_Zve32x)
                                                                                                                                                                                                  else
                                                                                                                                                                                                    (do
                                                                                                                                                                                                      bif (b__0 == (0xC22 : (BitVec 12)))
                                                                                                                                                                                                      then
                                                                                                                                                                                                        (currentlyEnabled
                                                                                                                                                                                                          Ext_Zve32x)
                                                                                                                                                                                                      else
                                                                                                                                                                                                        (do
                                                                                                                                                                                                          bif (b__0 == (0x321 : (BitVec 12)))
                                                                                                                                                                                                          then
                                                                                                                                                                                                            (currentlyEnabled
                                                                                                                                                                                                              Ext_Smcntrpmf)
                                                                                                                                                                                                          else
                                                                                                                                                                                                            (do
                                                                                                                                                                                                              bif (b__0 == (0x721 : (BitVec 12)))
                                                                                                                                                                                                              then
                                                                                                                                                                                                                (pure ((← (currentlyEnabled
                                                                                                                                                                                                                        Ext_Smcntrpmf)) && (xlen == 32)))
                                                                                                                                                                                                              else
                                                                                                                                                                                                                (do
                                                                                                                                                                                                                  bif (b__0 == (0x322 : (BitVec 12)))
                                                                                                                                                                                                                  then
                                                                                                                                                                                                                    (currentlyEnabled
                                                                                                                                                                                                                      Ext_Smcntrpmf)
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                      bif (b__0 == (0x722 : (BitVec 12)))
                                                                                                                                                                                                                      then
                                                                                                                                                                                                                        (pure ((← (currentlyEnabled
                                                                                                                                                                                                                                Ext_Smcntrpmf)) && (xlen == 32)))
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                          bif (b__0 == (0x180 : (BitVec 12)))
                                                                                                                                                                                                                          then
                                                                                                                                                                                                                            (pure ((← (currentlyEnabled
                                                                                                                                                                                                                                    Ext_S)) && (not
                                                                                                                                                                                                                                  ((g__2 == Supervisor) && ((_get_Mstatus_TVM
                                                                                                                                                                                                                                        (← readReg mstatus)) == (0b1 : (BitVec 1)))))))
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            (pure false)))))))))))))))))))))))))))))))))))))))))))))))))))))))

/-- Type quantifiers: k_ex86692# : Bool -/
def check_CSR (csr : (BitVec 12)) (p : Privilege) (isWrite : Bool) : SailM Bool := do
  (pure ((check_CSR_priv csr p) && ((check_CSR_access csr isWrite) && (← (is_CSR_accessible csr p
            isWrite)))))

def exception_delegatee (e : ExceptionType) (p : Privilege) : SailM Privilege := do
  let idx := (BitVec.toNat (exceptionType_bits_forwards e))
  let super ← do (bit_to_bool (BitVec.access (← readReg medeleg) idx))
  let deleg ← do
    bif ((← (currentlyEnabled Ext_S)) && super)
    then (pure Supervisor)
    else (pure Machine)
  bif (zopz0zI_u (privLevel_to_bits deleg) (privLevel_to_bits p))
  then (pure p)
  else (pure deleg)

def findPendingInterrupt (ip : (BitVec 64)) : (Option InterruptType) :=
  let ip := (Mk_Minterrupts ip)
  bif ((_get_Minterrupts_MEI ip) == (0b1 : (BitVec 1)))
  then (some I_M_External)
  else
    (bif ((_get_Minterrupts_MSI ip) == (0b1 : (BitVec 1)))
    then (some I_M_Software)
    else
      (bif ((_get_Minterrupts_MTI ip) == (0b1 : (BitVec 1)))
      then (some I_M_Timer)
      else
        (bif ((_get_Minterrupts_SEI ip) == (0b1 : (BitVec 1)))
        then (some I_S_External)
        else
          (bif ((_get_Minterrupts_SSI ip) == (0b1 : (BitVec 1)))
          then (some I_S_Software)
          else
            (bif ((_get_Minterrupts_STI ip) == (0b1 : (BitVec 1)))
            then (some I_S_Timer)
            else none)))))

def getPendingSet (priv : Privilege) : SailM (Option ((BitVec 64) × Privilege)) := do
  assert ((← (currentlyEnabled Ext_S)) || ((← readReg mideleg) == (zeros (n := 64)))) "./sys/sys_control.sail:70.58-70.59"
  let pending_m ← do
    (pure ((← readReg mip) &&& ((← readReg mie) &&& (Complement.complement (← readReg mideleg)))))
  let pending_s ← do (pure ((← readReg mip) &&& ((← readReg mie) &&& (← readReg mideleg))))
  let mIE ← do
    (pure (((priv == Machine) && ((_get_Mstatus_MIE (← readReg mstatus)) == (0b1 : (BitVec 1)))) || ((priv == Supervisor) || (priv == User))))
  let sIE ← do
    (pure (((priv == Supervisor) && ((_get_Mstatus_SIE (← readReg mstatus)) == (0b1 : (BitVec 1)))) || (priv == User)))
  bif (mIE && (pending_m != (zeros (n := 64))))
  then (pure (some (pending_m, Machine)))
  else
    (bif (sIE && (pending_s != (zeros (n := 64))))
    then (pure (some (pending_s, Supervisor)))
    else (pure none))

def shouldWakeForInterrupt (_ : Unit) : SailM Bool := do
  (pure (((← readReg mip) &&& (← readReg mie)) != (zeros (n := 64))))

def dispatchInterrupt (priv : Privilege) : SailM (Option (InterruptType × Privilege)) := do
  match (← (getPendingSet priv)) with
  | none => (pure none)
  | .some (ip, p) =>
    (match (findPendingInterrupt ip) with
    | none => (pure none)
    | .some i => (pure (some (i, p))))

def tval (excinfo : (Option (BitVec 64))) : (BitVec 64) :=
  match excinfo with
  | .some e => e
  | none => (zeros (n := 64))

def track_trap (p : Privilege) : SailM Unit := do
  (long_csr_write_callback "mstatus" "mstatush" (← readReg mstatus))
  match p with
  | Machine =>
    (do
      (csr_name_write_callback "mcause" (← readReg mcause))
      (csr_name_write_callback "mtval" (← readReg mtval))
      (csr_name_write_callback "mepc" (← readReg mepc)))
  | Supervisor =>
    (do
      (csr_name_write_callback "scause" (← readReg scause))
      (csr_name_write_callback "stval" (← readReg stval))
      (csr_name_write_callback "sepc" (← readReg sepc)))
  | User => (internal_error "./sys/sys_control.sail" 148 "Invalid privilege level")
  | VirtualUser =>
    (internal_error "./sys/sys_control.sail" 149 "Hypervisor extension not supported")
  | VirtualSupervisor =>
    (internal_error "./sys/sys_control.sail" 150 "Hypervisor extension not supported")

/-- Type quantifiers: k_ex86758# : Bool -/
def trap_handler (del_priv : Privilege) (intr : Bool) (c : (BitVec 6)) (pc : (BitVec 64)) (info : (Option (BitVec 64))) (ext : (Option Unit)) : SailM (BitVec 64) := do
  let _ : Unit := (trap_callback ())
  bif (get_config_print_platform ())
  then
    (pure (print_endline
        (HAppend.hAppend "handling "
          (HAppend.hAppend
            (bif intr
            then "int#"
            else "exc#")
            (HAppend.hAppend (BitVec.toFormatted c)
              (HAppend.hAppend " at priv "
                (HAppend.hAppend (← (privLevel_to_str del_priv))
                  (HAppend.hAppend " with tval " (BitVec.toFormatted (tval info))))))))))
  else (pure ())
  bif (hartSupports Ext_Zicfilp)
  then (zicfilp_preserve_elp_on_trap del_priv)
  else (pure ())
  match del_priv with
  | Machine =>
    (do
      writeReg mcause (Sail.BitVec.updateSubrange (← readReg mcause) (64 -i 1) (64 -i 1)
        (bool_to_bits intr))
      writeReg mcause (Sail.BitVec.updateSubrange (← readReg mcause) (64 -i 2) 0
        (zero_extend (m := (64 -i 1)) c))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 7 7
        (_get_Mstatus_MIE (← readReg mstatus)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 3 3 (0b0 : (BitVec 1)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 12 11
        (privLevel_to_bits (← readReg cur_privilege)))
      writeReg mtval (tval info)
      writeReg mepc pc
      writeReg cur_privilege del_priv
      let _ : Unit := (handle_trap_extension del_priv pc ext)
      (track_trap del_priv)
      (prepare_trap_vector del_priv (← readReg mcause)))
  | Supervisor =>
    (do
      assert (← (currentlyEnabled Ext_S)) "no supervisor mode present for delegation"
      writeReg scause (Sail.BitVec.updateSubrange (← readReg scause) (64 -i 1) (64 -i 1)
        (bool_to_bits intr))
      writeReg scause (Sail.BitVec.updateSubrange (← readReg scause) (64 -i 2) 0
        (zero_extend (m := (64 -i 1)) c))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 5 5
        (_get_Mstatus_SIE (← readReg mstatus)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 1 1 (0b0 : (BitVec 1)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 8 8
        (← do
          match (← readReg cur_privilege) with
          | User => (pure (0b0 : (BitVec 1)))
          | Supervisor => (pure (0b1 : (BitVec 1)))
          | Machine =>
            (internal_error "./sys/sys_control.sail" 195 "invalid privilege for s-mode trap")
          | VirtualUser =>
            (internal_error "./sys/sys_control.sail" 196 "Hypervisor extension not supported")
          | VirtualSupervisor =>
            (internal_error "./sys/sys_control.sail" 197 "Hypervisor extension not supported")))
      writeReg stval (tval info)
      writeReg sepc pc
      writeReg cur_privilege del_priv
      let _ : Unit := (handle_trap_extension del_priv pc ext)
      (track_trap del_priv)
      (prepare_trap_vector del_priv (← readReg scause)))
  | User => (internal_error "./sys/sys_control.sail" 210 "Invalid privilege level")
  | VirtualUser =>
    (internal_error "./sys/sys_control.sail" 211 "Hypervisor extension not supported")
  | VirtualSupervisor =>
    (internal_error "./sys/sys_control.sail" 212 "Hypervisor extension not supported")

def exception_handler (cur_priv : Privilege) (ctl : ctl_result) (pc : (BitVec 64)) : SailM (BitVec 64) := do
  match ctl with
  | .CTL_TRAP e =>
    (do
      let del_priv ← do (exception_delegatee e.trap cur_priv)
      bif (get_config_print_platform ())
      then
        (pure (print_endline
            (HAppend.hAppend "trapping from "
              (HAppend.hAppend (← (privLevel_to_str cur_priv))
                (HAppend.hAppend " to "
                  (HAppend.hAppend (← (privLevel_to_str del_priv))
                    (HAppend.hAppend " to handle " (exceptionType_to_str e.trap))))))))
      else (pure ())
      (trap_handler del_priv false (exceptionType_bits_forwards e.trap) pc e.excinfo e.ext))
  | .CTL_MRET () =>
    (do
      let prev_priv ← do readReg cur_privilege
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 3 3
        (_get_Mstatus_MPIE (← readReg mstatus)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 7 7 (0b1 : (BitVec 1)))
      writeReg cur_privilege (← (privLevel_bits_forwards
          ((_get_Mstatus_MPP (← readReg mstatus)), 0#1)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 12 11
        (privLevel_to_bits
          (← do
            bif (← (currentlyEnabled Ext_U))
            then (pure User)
            else (pure Machine))))
      bif (bne (← readReg cur_privilege) Machine)
      then
        writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 17 17 (0b0 : (BitVec 1)))
      else (pure ())
      bif (hartSupports Ext_Zicfilp)
      then (zicfilp_restore_elp_on_xret mRET (← readReg cur_privilege))
      else (pure ())
      (long_csr_write_callback "mstatus" "mstatush" (← readReg mstatus))
      bif (get_config_print_platform ())
      then
        (pure (print_endline
            (HAppend.hAppend "ret-ing from "
              (HAppend.hAppend (← (privLevel_to_str prev_priv))
                (HAppend.hAppend " to " (← (privLevel_to_str (← readReg cur_privilege))))))))
      else (pure ())
      (prepare_xret_target Machine))
  | .CTL_SRET () =>
    (do
      let prev_priv ← do readReg cur_privilege
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 1 1
        (_get_Mstatus_SPIE (← readReg mstatus)))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 5 5 (0b1 : (BitVec 1)))
      writeReg cur_privilege (← do
        bif ((_get_Mstatus_SPP (← readReg mstatus)) == (0b1 : (BitVec 1)))
        then (pure Supervisor)
        else (pure User))
      writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 8 8 (0b0 : (BitVec 1)))
      bif (bne (← readReg cur_privilege) Machine)
      then
        writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 17 17 (0b0 : (BitVec 1)))
      else (pure ())
      bif (hartSupports Ext_Zicfilp)
      then (zicfilp_restore_elp_on_xret sRET (← readReg cur_privilege))
      else (pure ())
      (long_csr_write_callback "mstatus" "mstatush" (← readReg mstatus))
      bif (get_config_print_platform ())
      then
        (pure (print_endline
            (HAppend.hAppend "ret-ing from "
              (HAppend.hAppend (← (privLevel_to_str prev_priv))
                (HAppend.hAppend " to " (← (privLevel_to_str (← readReg cur_privilege))))))))
      else (pure ())
      (prepare_xret_target Supervisor))

def xtval_exception_value (e : ExceptionType) (excinfo : (BitVec 64)) : (Option (BitVec 64)) :=
  bif (match e with
     | .E_Breakpoint () => true
     | .E_Load_Addr_Align () => true
     | .E_Load_Access_Fault () => true
     | .E_SAMO_Addr_Align () => true
     | .E_SAMO_Access_Fault () => true
     | .E_Fetch_Addr_Align () => true
     | .E_Fetch_Access_Fault () => true
     | .E_Illegal_Instr () => true
     | _ => true)
  then (some excinfo)
  else none

def handle_exception (xtval : (BitVec 64)) (e : ExceptionType) : SailM Unit := do
  let t : sync_exception :=
    { trap := e
      excinfo := (xtval_exception_value e xtval)
      ext := none }
  (set_next_pc (← (exception_handler (← readReg cur_privilege) (CTL_TRAP t) (← readReg PC))))

def handle_interrupt (i : InterruptType) (del_priv : Privilege) : SailM Unit := do
  (set_next_pc
    (← (trap_handler del_priv true (interruptType_bits_forwards i) (← readReg PC) none none)))

def reset_misa (_ : Unit) : SailM Unit := do
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 0 0
    (bool_to_bits (hartSupports Ext_A)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 2 2
    (bool_to_bits (hartSupports Ext_C)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 1 1
    (bool_to_bits (hartSupports Ext_B)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 12 12
    (bool_to_bits (hartSupports Ext_M)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 20 20
    (bool_to_bits (hartSupports Ext_U)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 18 18
    (bool_to_bits (hartSupports Ext_S)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 21 21
    (bool_to_bits (hartSupports Ext_V)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 4 4 (bool_to_bits base_E_enabled))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 8 8
    (Complement.complement (_get_Misa_E (← readReg misa))))
  bif ((hartSupports Ext_F) && (hartSupports Ext_Zfinx))
  then (internal_error "./sys/sys_control.sail" 308 "F and Zfinx cannot both be enabled!")
  else (pure ())
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 5 5
    (bool_to_bits (hartSupports Ext_F)))
  writeReg misa (Sail.BitVec.updateSubrange (← readReg misa) 3 3
    (bool_to_bits (hartSupports Ext_D)))
  (csr_name_write_callback "misa" (← readReg misa))

def set_pc_reset_address (addr : (BitVec 64)) : SailM Unit := do
  writeReg pc_reset_address (trunc (m := 64) addr)

def reset_sys (_ : Unit) : SailM Unit := do
  writeReg cur_privilege Machine
  writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 3 3 (0b0 : (BitVec 1)))
  writeReg mstatus (Sail.BitVec.updateSubrange (← readReg mstatus) 17 17 (0b0 : (BitVec 1)))
  (long_csr_write_callback "mstatus" "mstatush" (← readReg mstatus))
  (reset_misa ())
  (cancel_reservation ())
  writeReg PC (← readReg pc_reset_address)
  writeReg nextPC (← readReg pc_reset_address)
  writeReg mcause (zeros (n := 64))
  (csr_name_write_callback "mcause" (← readReg mcause))
  (reset_pmp ())
  writeReg mseccfg (Sail.BitVec.updateSubrange (← readReg mseccfg) 9 9
    (bool_to_bits (false : Bool)))
  writeReg mseccfg (Sail.BitVec.updateSubrange (← readReg mseccfg) 8 8
    (bool_to_bits (false : Bool)))
  bif (hartSupports Ext_Zicfilp)
  then writeReg mseccfg (Sail.BitVec.updateSubrange (← readReg mseccfg) 10 10 (0b0 : (BitVec 1)))
  else (pure ())
  writeReg vstart (zeros (n := 64))
  writeReg vl (zeros (n := 64))
  writeReg vcsr (Sail.BitVec.updateSubrange (← readReg vcsr) 2 1 (0b00 : (BitVec 2)))
  writeReg vcsr (Sail.BitVec.updateSubrange (← readReg vcsr) 0 0 (0b0 : (BitVec 1)))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) (64 -i 1) (64 -i 1)
    (0b1 : (BitVec 1)))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) (64 -i 2) 8
    (zeros (n := (64 -i 9))))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) 7 7 (0b0 : (BitVec 1)))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) 6 6 (0b0 : (BitVec 1)))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) 5 3 (0b000 : (BitVec 3)))
  writeReg vtype (Sail.BitVec.updateSubrange (← readReg vtype) 2 0 (0b000 : (BitVec 3)))

/-- Type quantifiers: k_t : Type -/
def MemoryOpResult_add_meta (r : (Result k_t ExceptionType)) (m : Unit) : (Result (k_t × Unit) ExceptionType) :=
  match r with
  | .Ok v => (Ok (v, m))
  | .Err e => (Err e)

/-- Type quantifiers: k_t : Type -/
def MemoryOpResult_drop_meta (r : (Result (k_t × Unit) ExceptionType)) : (Result k_t ExceptionType) :=
  match r with
  | .Ok (v, m) => (Ok v)
  | .Err e => (Err e)

