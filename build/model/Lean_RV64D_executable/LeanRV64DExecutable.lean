import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Extensions
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.SysRegs
import LeanRV64DExecutable.SysControl
import LeanRV64DExecutable.Platform
import LeanRV64DExecutable.Pma
import LeanRV64DExecutable.VmemTlb
import LeanRV64DExecutable.ZifenceiInsts

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

def initialize_registers (_ : Unit) : Unit :=
  ()

def sail_model_init (x_0 : Unit) : SailM Unit := do
  writeReg misa (_update_Misa_MXL (Mk_Misa (zeros (n := 64))) (architecture_bits_forwards RV64))
  writeReg mstatus (let mxl := (architecture_bits_forwards RV64)
  (_update_Mstatus_UXL
    (_update_Mstatus_SXL (Mk_Mstatus (zeros (n := 64)))
      (if (((xlen != 32) && (hartSupports Ext_S)) : Bool)
      then mxl
      else (zeros (n := 2))))
    (if (((xlen != 32) && (hartSupports Ext_U)) : Bool)
    then mxl
    else (zeros (n := 2)))))
  writeReg senvcfg (← (legalize_senvcfg (Mk_SEnvcfg (zeros (n := 64))) (zeros (n := 64))))
  writeReg mseccfg (← (legalize_mseccfg (Mk_Seccfg (zeros (n := 64))) (zeros (n := 64))))
  writeReg menvcfg (← (legalize_menvcfg (Mk_MEnvcfg (zeros (n := 64))) (zeros (n := 64))))
  writeReg mvendorid (← (to_bits_checked (l := 32) (0 : Int)))
  writeReg mimpid (← (to_bits_checked (l := 64) (0 : Int)))
  writeReg marchid (← (to_bits_checked (l := 64) (0 : Int)))
  writeReg mhartid (← (to_bits_checked (l := 64) (0 : Int)))
  writeReg mconfigptr (zeros (n := 64))
  writeReg pc_reset_address (zeros (n := 64))
  writeReg plat_clint_base (← (to_bits_checked (l := 64) (33554432 : Int)))
  writeReg plat_clint_size (← (to_bits_checked (l := 64) (786432 : Int)))
  writeReg htif_tohost_base none
  writeReg pma_regions [{ base := (0x0000000000001000 : (BitVec 64))
                          size := (0x0000000000001000 : (BitVec 64))
                          attributes := { cacheable := true
                                          coherent := true
                                          executable := false
                                          readable := true
                                          writable := false
                                          read_idempotent := true
                                          write_idempotent := true
                                          misaligned_fault := NoFault
                                          reservability := RsrvNone
                                          supports_cbo_zero := false }
                          include_in_device_tree := false }, { base := (0x0000000002000000 : (BitVec 64))
                                                               size := (0x0000000002000000 : (BitVec 64))
                                                               attributes := { cacheable := false
                                                                               coherent := true
                                                                               executable := false
                                                                               readable := true
                                                                               writable := true
                                                                               read_idempotent := false
                                                                               write_idempotent := false
                                                                               misaligned_fault := AlignmentFault
                                                                               reservability := RsrvNone
                                                                               supports_cbo_zero := false }
                                                               include_in_device_tree := false }, { base := (0x0000000080000000 : (BitVec 64))
                                                                                                    size := (0x0000000080000000 : (BitVec 64))
                                                                                                    attributes := { cacheable := true
                                                                                                                    coherent := true
                                                                                                                    executable := true
                                                                                                                    readable := true
                                                                                                                    writable := true
                                                                                                                    read_idempotent := true
                                                                                                                    write_idempotent := true
                                                                                                                    misaligned_fault := NoFault
                                                                                                                    reservability := RsrvEventual
                                                                                                                    supports_cbo_zero := true }
                                                                                                    include_in_device_tree := true }]
  writeReg tlb (vectorInit none)
  (pure (initialize_registers ()))

end LeanRV64DExecutable.Functions
