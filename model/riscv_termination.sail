/*=======================================================================================*/
/*  This Sail RISC-V architecture model, comprising all files and                        */
/*  directories except where otherwise noted is subject the BSD                          */
/*  two-clause license in the LICENSE file.                                              */
/*                                                                                       */
/*  SPDX-License-Identifier: BSD-2-Clause                                                */
/*=======================================================================================*/

val compressed_measure : ast -> int
function compressed_measure(instr) =
  match instr {
    C_ADDI4SPN (rdc,nzimm) => 1,
    C_LW (uimm,rsc,rdc) => 1,
    C_LD (uimm,rsc,rdc) => 1,
    C_SW (uimm,rsc1,rsc2) => 1,
    C_SD (uimm,rsc1,rsc2) => 1,
    C_ADDI (nzi,rsd) => 1,
    C_JAL (imm) => 1,
    C_LI (imm,rd) => 1,
    C_ADDI16SP (imm) => 1,
    C_LUI (imm,rd) => 1,
    C_SRLI (shamt,rsd) => 1,
    C_SRAI (shamt,rsd) => 1,
    C_ANDI (imm,rsd) => 1,
    C_SUB (rsd,rs2) => 1,
    C_XOR (rsd,rs2) => 1,
    C_OR (rsd,rs2) => 1,
    C_AND (rsd,rs2) => 1,
    C_SUBW (rsd,rs2) => 1,
    C_ADDW (rsd,rs2) => 1,
    C_J (imm) => 1,
    C_BEQZ (imm,rs) => 1,
    C_BNEZ (imm,rs) => 1,
    C_SLLI (shamt,rsd) => 1,
    C_LWSP (uimm,rd) => 1,
    C_LDSP (uimm,rd) => 1,
    C_SWSP (uimm,rs2) => 1,
    C_SDSP (uimm,rs2) => 1,
    C_JR (rs1) => 1,
    C_JALR (rs1) => 1,
    C_MV (rd,rs2) => 1,
    C_EBREAK (tt) => 1,
    C_ADD (rsd,rs2) => 1,
    _ => 0
  }
termination_measure execute(i) = compressed_measure(i)
termination_measure pt_walk(_,_,_,_,_,_,_,level,_, _) = level

function extensionEnabled_measure(ext : extension) -> int =
  match ext {
    Ext_Zca => 1, // Ext_C
    Ext_Zfhmin => 1, // Ext_Zfh
    Ext_Zba => 1, // Ext_B
    Ext_Zbb => 1, // Ext_B
    Ext_Zbs => 1, // Ext_B
    Ext_Zcb => 2, // Ext_Zca
    Ext_Zcd => 2, // Ext_Zca, (Ext_D)
    Ext_Zcf => 2, // Ext_Zca, (Ext_F)
    _ => 0
  }
termination_measure extensionEnabled(ext) = extensionEnabled_measure(ext)

// The top-level loop isn't terminating, but we put a limit so that it can still be included in the Coq output
termination_measure loop while 100
