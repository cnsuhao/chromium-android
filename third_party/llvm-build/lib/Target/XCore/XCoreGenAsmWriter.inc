/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Writer Source Fragment                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void XCoreInstPrinter::printInstruction(const MCInst *MI, raw_ostream &O) {
  static const uint32_t OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// PROLOG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    588U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    581U,	// BUNDLE
    598U,	// LIFETIME_START
    568U,	// LIFETIME_END
    2201U,	// ADD_2rus
    2201U,	// ADD_3r
    18530U,	// ADJCALLSTACKDOWN
    18550U,	// ADJCALLSTACKUP
    4721054U,	// ANDNOT_2r
    2206U,	// AND_3r
    2333U,	// ASHR_l2rus
    2333U,	// ASHR_l3r
    18879U,	// BAU_1r
    4196847U,	// BITREV_l2r
    18568U,	// BLA_1r
    18648U,	// BLRF_lu10
    18648U,	// BLRF_u10
    34985U,	// BRBF_lru6
    34985U,	// BRBF_ru6
    35177U,	// BRBT_lru6
    35177U,	// BRBT_ru6
    18982U,	// BRBU_lu6
    18982U,	// BRBU_u6
    4196521U,	// BRFF_lru6
    4196521U,	// BRFF_ru6
    4196713U,	// BRFT_lru6
    4196713U,	// BRFT_ru6
    18884U,	// BRFU_lu6
    18884U,	// BRFU_u6
    1102293U,	// BR_JT
    1626581U,	// BR_JT32
    4196838U,	// BYTEREV_l2r
    4262625U,	// CHKCT_2r
    4262625U,	// CHKCT_rus
    1046U,	// CLRE_0R
    84727U,	// CLRPT_1R
    18735U,	// CLRSR_branch_lu6
    18735U,	// CLRSR_branch_u6
    18735U,	// CLRSR_lu6
    18735U,	// CLRSR_u6
    4196877U,	// CLZ_l2r
    10489915U,	// CRC8_l4r
    34080807U,	// CRC_l3r
    1051U,	// DCALL_0R
    1083U,	// DENTSP_0R
    18626U,	// DGETREG_1r
    2403U,	// DIVS_l3r
    2528U,	// DIVU_l3r
    1090U,	// DRESTSP_0R
    1116U,	// DRET_0R
    18613U,	// ECALLF_1r
    18833U,	// ECALLT_1r
    84768U,	// EDU_1r
    84777U,	// EEU_1r
    12683511U,	// ENDIN_2r
    18699U,	// ENTSP_lu6
    18699U,	// ENTSP_u6
    2329U,	// EQ_2rus
    2329U,	// EQ_3r
    18706U,	// EXTSP_lu6
    18706U,	// EXTSP_u6
    84682U,	// FREER_1r
    1110U,	// FREET_0R
    12683427U,	// GETD_l2r
    1022U,	// GETED_0R
    1098U,	// GETET_0R
    1034U,	// GETID_0R
    1057U,	// GETKEP_0R
    1070U,	// GETKSP_0R
    12683518U,	// GETN_l2r
    117124U,	// GETPS_l2r
    4196669U,	// GETR_rus
    12683686U,	// GETST_2r
    12683612U,	// GETTS_2r
    12683629U,	// INCT_2r
    136049U,	// INITCP_2r
    152433U,	// INITDP_2r
    168817U,	// INITLR_l2r
    185201U,	// INITPC_2r
    201585U,	// INITSP_2r
    16878082U,	// INPW_l2rus
    13207843U,	// INSHR_2r
    12683673U,	// INT_2r
    12683514U,	// IN_2r
    18666U,	// KCALL_1r
    1121U,	// KRET_0R
    90181784U,	// LADD_l5r
    25168195U,	// LD16S_3r
    25168313U,	// LD8U_3r
    29362222U,	// LDA16B_l3r
    25167918U,	// LDA16F_l3r
    18433U,	// LDAPF_lu10
    18433U,	// LDAPF_lu10_ba
    18433U,	// LDAPF_u10
    29362679U,	// LDAWB_l2rus
    29362679U,	// LDAWB_l3r
    6757U,	// LDAWCP_lu6
    6757U,	// LDAWCP_u6
    215543U,	// LDAWDP_lru6
    215543U,	// LDAWDP_ru6
    2623558U,	// LDAWFI
    25168375U,	// LDAWF_l2rus
    25168375U,	// LDAWF_l3r
    231927U,	// LDAWSP_lru6
    231927U,	// LDAWSP_lru6_RRegs
    231927U,	// LDAWSP_ru6
    231927U,	// LDAWSP_ru6_RRegs
    4196499U,	// LDC_lru6
    4196499U,	// LDC_ru6
    988U,	// LDET_0R
    369101279U,	// LDIVU_l5r
    958U,	// LDSED_0R
    898U,	// LDSPC_0R
    928U,	// LDSSR_0R
    248317U,	// LDWCP_lru6
    248317U,	// LDWCP_ru6
    215549U,	// LDWDP_lru6
    215549U,	// LDWDP_ru6
    2623568U,	// LDWFI
    231933U,	// LDWSP_lru6
    231933U,	// LDWSP_ru6
    25168381U,	// LDW_2rus
    25168381U,	// LDW_3r
    536873201U,	// LMUL_l6r
    2391U,	// LSS_3r
    90181773U,	// LSUB_l5r
    2522U,	// LSU_3r
    905972042U,	// MACCS_l4r
    905972168U,	// MACCU_l4r
    84650U,	// MJOIN_1r
    4196561U,	// MKMSK_2r
    4196561U,	// MKMSK_rus
    84595U,	// MSYNC_1r
    2290U,	// MUL_l3r
    4196541U,	// NEG
    4196769U,	// NOT
    2347U,	// OR_3r
    4262636U,	// OUTCT_2r
    4262636U,	// OUTCT_rus
    157356871U,	// OUTPW_l2rus
    8917U,	// OUTSHR_2r
    4262669U,	// OUTT_2r
    4262679U,	// OUT_2r
    12683467U,	// PEEK_2r
    2385U,	// REMS_l3r
    2511U,	// REMU_l3r
    18692U,	// RETSP_lu6
    18692U,	// RETSP_u6
    530U,	// SELECT_CC
    4262558U,	// SETCLK_l2r
    18444U,	// SETCP_1r
    4262538U,	// SETC_l2r
    4262538U,	// SETC_lru6
    4262538U,	// SETC_ru6
    18453U,	// SETDP_1r
    4262548U,	// SETD_2r
    265010U,	// SETEV_1r
    555U,	// SETKEP_0R
    4262581U,	// SETN_l2r
    4262526U,	// SETPSC_2r
    4262761U,	// SETPS_l2r
    4262658U,	// SETPT_2r
    4262749U,	// SETRDY_l2r
    18462U,	// SETSP_1r
    18742U,	// SETSR_branch_lu6
    18742U,	// SETSR_branch_u6
    18742U,	// SETSR_lu6
    18742U,	// SETSR_u6
    4262738U,	// SETTW_l2r
    265021U,	// SETV_1r
    4721069U,	// SEXT_2r
    4721069U,	// SEXT_rus
    2277U,	// SHL_2rus
    2277U,	// SHL_3r
    2334U,	// SHR_2rus
    2334U,	// SHR_3r
    1016U,	// SSYNC_0r
    25167925U,	// ST16_l3r
    25167937U,	// ST8_l3r
    1002U,	// STET_0R
    973U,	// STSED_0R
    913U,	// STSPC_0R
    943U,	// STSSR_0R
    215560U,	// STWDP_lru6
    215560U,	// STWDP_ru6
    2623577U,	// STWFI
    231944U,	// STWSP_lru6
    231944U,	// STWSP_ru6
    25168392U,	// STW_2rus
    25168392U,	// STW_l3r
    2190U,	// SUB_2rus
    2190U,	// SUB_3r
    84671U,	// SYNCR_1r
    12683635U,	// TESTCT_2r
    12683484U,	// TESTLCL_l2r
    12683643U,	// TESTWCT_2r
    84857U,	// TSTART_1R
    18605U,	// WAITEF_1R
    18825U,	// WAITET_1R
    1126U,	// WAITEU_0R
    2346U,	// XOR_l3r
    4721075U,	// ZEXT_2r
    4721075U,	// ZEXT_rus
    0U
  };

  const char AsmStrs[] = {
  /* 0 */ 'l', 'd', 'a', 'p', 32, 'r', '1', '1', ',', 32, 0,
  /* 11 */ 's', 'e', 't', 32, 'c', 'p', ',', 32, 0,
  /* 20 */ 's', 'e', 't', 32, 'd', 'p', ',', 32, 0,
  /* 29 */ 's', 'e', 't', 32, 's', 'p', ',', 32, 0,
  /* 38 */ 'c', 'r', 'c', '3', '2', 32, 0,
  /* 45 */ 'l', 'd', 'a', '1', '6', 32, 0,
  /* 52 */ 's', 't', '1', '6', 32, 0,
  /* 58 */ 'c', 'r', 'c', '8', 32, 0,
  /* 64 */ 's', 't', '8', 32, 0,
  /* 69 */ '#', 32, 'L', 'D', 'A', 'W', 'F', 'I', 32, 0,
  /* 79 */ '#', 32, 'L', 'D', 'W', 'F', 'I', 32, 0,
  /* 88 */ '#', 32, 'S', 'T', 'W', 'F', 'I', 32, 0,
  /* 97 */ '#', 32, 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 32, 0,
  /* 117 */ '#', 32, 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 32, 0,
  /* 135 */ 'b', 'l', 'a', 32, 0,
  /* 140 */ 'l', 's', 'u', 'b', 32, 0,
  /* 146 */ 'l', 'd', 'c', 32, 0,
  /* 151 */ 'l', 'a', 'd', 'd', 32, 0,
  /* 157 */ 'a', 'n', 'd', 32, 0,
  /* 162 */ 'g', 'e', 't', 'd', 32, 0,
  /* 168 */ 'b', 'f', 32, 0,
  /* 172 */ 'w', 'a', 'i', 't', 'e', 'f', 32, 0,
  /* 180 */ 'e', 'c', 'a', 'l', 'l', 'f', 32, 0,
  /* 188 */ 'n', 'e', 'g', 32, 0,
  /* 193 */ 'd', 'g', 'e', 't', 'r', 'e', 'g', 32, 0,
  /* 202 */ 'p', 'e', 'e', 'k', 32, 0,
  /* 208 */ 'm', 'k', 'm', 's', 'k', 32, 0,
  /* 215 */ 'b', 'l', 32, 0,
  /* 219 */ 't', 'e', 's', 't', 'l', 'c', 'l', 32, 0,
  /* 228 */ 's', 'h', 'l', 32, 0,
  /* 233 */ 'k', 'c', 'a', 'l', 'l', 32, 0,
  /* 240 */ 'l', 'm', 'u', 'l', 32, 0,
  /* 246 */ 'e', 'n', 'd', 'i', 'n', 32, 0,
  /* 253 */ 'g', 'e', 't', 'n', 32, 0,
  /* 259 */ 'r', 'e', 't', 's', 'p', 32, 0,
  /* 266 */ 'e', 'n', 't', 's', 'p', 32, 0,
  /* 273 */ 'e', 'x', 't', 's', 'p', 32, 0,
  /* 280 */ 'e', 'q', 32, 0,
  /* 284 */ 'a', 's', 'h', 'r', 32, 0,
  /* 290 */ 'i', 'n', 's', 'h', 'r', 32, 0,
  /* 297 */ 'x', 'o', 'r', 32, 0,
  /* 302 */ 'c', 'l', 'r', 's', 'r', 32, 0,
  /* 309 */ 's', 'e', 't', 's', 'r', 32, 0,
  /* 316 */ 'g', 'e', 't', 'r', 32, 0,
  /* 322 */ 'l', 'd', '1', '6', 's', 32, 0,
  /* 329 */ 'm', 'a', 'c', 'c', 's', 32, 0,
  /* 336 */ 'r', 'e', 'm', 's', 32, 0,
  /* 342 */ 'l', 's', 's', 32, 0,
  /* 347 */ 'g', 'e', 't', 't', 's', 32, 0,
  /* 354 */ 'd', 'i', 'v', 's', 32, 0,
  /* 360 */ 'b', 't', 32, 0,
  /* 364 */ 'i', 'n', 'c', 't', 32, 0,
  /* 370 */ 't', 'e', 's', 't', 'c', 't', 32, 0,
  /* 378 */ 't', 'e', 's', 't', 'w', 'c', 't', 32, 0,
  /* 387 */ 'g', 'e', 't', 32, 0,
  /* 392 */ 'w', 'a', 'i', 't', 'e', 't', 32, 0,
  /* 400 */ 'e', 'c', 'a', 'l', 'l', 't', 32, 0,
  /* 408 */ 'i', 'n', 't', 32, 0,
  /* 413 */ 'a', 'n', 'd', 'n', 'o', 't', 32, 0,
  /* 421 */ 'g', 'e', 't', 's', 't', 32, 0,
  /* 428 */ 's', 'e', 'x', 't', 32, 0,
  /* 434 */ 'z', 'e', 'x', 't', 32, 0,
  /* 440 */ 'l', 'd', '8', 'u', 32, 0,
  /* 446 */ 'b', 'a', 'u', 32, 0,
  /* 451 */ 'b', 'u', 32, 0,
  /* 455 */ 'm', 'a', 'c', 'c', 'u', 32, 0,
  /* 462 */ 'r', 'e', 'm', 'u', 32, 0,
  /* 468 */ 'b', 'r', 'u', 32, 0,
  /* 473 */ 'l', 's', 'u', 32, 0,
  /* 478 */ 'l', 'd', 'i', 'v', 'u', 32, 0,
  /* 485 */ 'b', 'y', 't', 'e', 'r', 'e', 'v', 32, 0,
  /* 494 */ 'b', 'i', 't', 'r', 'e', 'v', 32, 0,
  /* 502 */ 'l', 'd', 'a', 'w', 32, 0,
  /* 508 */ 'l', 'd', 'w', 32, 0,
  /* 513 */ 'i', 'n', 'p', 'w', 32, 0,
  /* 519 */ 's', 't', 'w', 32, 0,
  /* 524 */ 'c', 'l', 'z', 32, 0,
  /* 529 */ '#', 32, 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 32, 'P', 'S', 'E', 'U', 'D', 'O', '!', 0,
  /* 549 */ 'b', 'u', 32, '-', 0,
  /* 554 */ 's', 'e', 't', 32, 'k', 'e', 'p', ',', 32, 'r', '1', '1', 0,
  /* 567 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 580 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 587 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 597 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 612 */ 'l', 'd', 'a', 'w', 32, 'r', '1', '1', ',', 32, 'c', 'p', '[', 0,
  /* 626 */ 'm', 's', 'y', 'n', 'c', 32, 'r', 'e', 's', '[', 0,
  /* 637 */ 's', 'e', 't', 'p', 's', 'c', 32, 'r', 'e', 's', '[', 0,
  /* 649 */ 's', 'e', 't', 'c', 32, 'r', 'e', 's', '[', 0,
  /* 659 */ 's', 'e', 't', 'd', 32, 'r', 'e', 's', '[', 0,
  /* 669 */ 's', 'e', 't', 'c', 'l', 'k', 32, 'r', 'e', 's', '[', 0,
  /* 681 */ 'm', 'j', 'o', 'i', 'n', 32, 'r', 'e', 's', '[', 0,
  /* 692 */ 's', 'e', 't', 'n', 32, 'r', 'e', 's', '[', 0,
  /* 702 */ 's', 'y', 'n', 'c', 'r', 32, 'r', 'e', 's', '[', 0,
  /* 713 */ 'f', 'r', 'e', 'e', 'r', 32, 'r', 'e', 's', '[', 0,
  /* 724 */ 'o', 'u', 't', 's', 'h', 'r', 32, 'r', 'e', 's', '[', 0,
  /* 736 */ 'c', 'h', 'k', 'c', 't', 32, 'r', 'e', 's', '[', 0,
  /* 747 */ 'o', 'u', 't', 'c', 't', 32, 'r', 'e', 's', '[', 0,
  /* 758 */ 'c', 'l', 'r', 'p', 't', 32, 'r', 'e', 's', '[', 0,
  /* 769 */ 's', 'e', 't', 'p', 't', 32, 'r', 'e', 's', '[', 0,
  /* 780 */ 'o', 'u', 't', 't', 32, 'r', 'e', 's', '[', 0,
  /* 790 */ 'o', 'u', 't', 32, 'r', 'e', 's', '[', 0,
  /* 799 */ 'e', 'd', 'u', 32, 'r', 'e', 's', '[', 0,
  /* 808 */ 'e', 'e', 'u', 32, 'r', 'e', 's', '[', 0,
  /* 817 */ 's', 'e', 't', 'e', 'v', 32, 'r', 'e', 's', '[', 0,
  /* 828 */ 's', 'e', 't', 'v', 32, 'r', 'e', 's', '[', 0,
  /* 838 */ 'o', 'u', 't', 'p', 'w', 32, 'r', 'e', 's', '[', 0,
  /* 849 */ 's', 'e', 't', 't', 'w', 32, 'r', 'e', 's', '[', 0,
  /* 860 */ 's', 'e', 't', 'r', 'd', 'y', 32, 'r', 'e', 's', '[', 0,
  /* 872 */ 's', 'e', 't', 32, 'p', 's', '[', 0,
  /* 880 */ 'i', 'n', 'i', 't', 32, 't', '[', 0,
  /* 888 */ 's', 't', 'a', 'r', 't', 32, 't', '[', 0,
  /* 897 */ 'l', 'd', 'w', 32, 's', 'p', 'c', ',', 32, 's', 'p', '[', '1', ']', 0,
  /* 912 */ 's', 't', 'w', 32, 's', 'p', 'c', ',', 32, 's', 'p', '[', '1', ']', 0,
  /* 927 */ 'l', 'd', 'w', 32, 's', 's', 'r', ',', 32, 's', 'p', '[', '2', ']', 0,
  /* 942 */ 's', 't', 'w', 32, 's', 's', 'r', ',', 32, 's', 'p', '[', '2', ']', 0,
  /* 957 */ 'l', 'd', 'w', 32, 's', 'e', 'd', ',', 32, 's', 'p', '[', '3', ']', 0,
  /* 972 */ 's', 't', 'w', 32, 's', 'e', 'd', ',', 32, 's', 'p', '[', '3', ']', 0,
  /* 987 */ 'l', 'd', 'w', 32, 'e', 't', ',', 32, 's', 'p', '[', '4', ']', 0,
  /* 1001 */ 's', 't', 'w', 32, 'e', 't', ',', 32, 's', 'p', '[', '4', ']', 0,
  /* 1015 */ 's', 's', 'y', 'n', 'c', 0,
  /* 1021 */ 'g', 'e', 't', 32, 'r', '1', '1', ',', 32, 'e', 'd', 0,
  /* 1033 */ 'g', 'e', 't', 32, 'r', '1', '1', ',', 32, 'i', 'd', 0,
  /* 1045 */ 'c', 'l', 'r', 'e', 0,
  /* 1050 */ 'd', 'c', 'a', 'l', 'l', 0,
  /* 1056 */ 'g', 'e', 't', 32, 'r', '1', '1', ',', 32, 'k', 'e', 'p', 0,
  /* 1069 */ 'g', 'e', 't', 32, 'r', '1', '1', ',', 32, 'k', 's', 'p', 0,
  /* 1082 */ 'd', 'e', 'n', 't', 's', 'p', 0,
  /* 1089 */ 'd', 'r', 'e', 's', 't', 's', 'p', 0,
  /* 1097 */ 'g', 'e', 't', 32, 'r', '1', '1', ',', 32, 'e', 't', 0,
  /* 1109 */ 'f', 'r', 'e', 'e', 't', 0,
  /* 1115 */ 'd', 'r', 'e', 't', 0,
  /* 1120 */ 'k', 'r', 'e', 't', 0,
  /* 1125 */ 'w', 'a', 'i', 't', 'e', 'u', 0,
  };

  O << "\t";

  // Emit the opcode for the instruction.
  uint32_t Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 2047)-1;


  // Fragment 0 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 11) & 7) {
  default:   // unreachable.
  case 0:
    // DBG_VALUE, BUNDLE, LIFETIME_START, LIFETIME_END, CLRE_0R, DCALL_0R, DE...
    return;
    break;
  case 1:
    // ADD_2rus, ADD_3r, ADJCALLSTACKDOWN, ADJCALLSTACKUP, ANDNOT_2r, AND_3r,...
    printOperand(MI, 0, O); 
    break;
  case 2:
    // BR_JT, BR_JT32, CRC8_l4r, INITCP_2r, INITDP_2r, INITLR_l2r, INITPC_2r,...
    printOperand(MI, 1, O); 
    break;
  case 3:
    // LDAWCP_lu6, LDAWCP_u6
    printMemOperand(MI, 0, O); 
    O << ']'; 
    return;
    break;
  case 4:
    // OUTSHR_2r
    printOperand(MI, 2, O); 
    O << "], "; 
    printOperand(MI, 1, O); 
    return;
    break;
  }


  // Fragment 1 encoded into 5 bits for 17 unique commands.
  switch ((Bits >> 14) & 31) {
  default:   // unreachable.
  case 0:
    // ADD_2rus, ADD_3r, ANDNOT_2r, AND_3r, ASHR_l2rus, ASHR_l3r, BITREV_l2r,...
    O << ", "; 
    break;
  case 1:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, BAU_1r, BLA_1r, BLRF_lu10, BLRF_u10,...
    return;
    break;
  case 2:
    // BRBF_lru6, BRBF_ru6, BRBT_lru6, BRBT_ru6
    O << ", -"; 
    printOperand(MI, 1, O); 
    return;
    break;
  case 3:
    // BR_JT, BR_JT32
    O << "\n"; 
    break;
  case 4:
    // CHKCT_2r, CHKCT_rus, OUTCT_2r, OUTCT_rus, OUTPW_l2rus, OUTT_2r, OUT_2r...
    O << "], "; 
    break;
  case 5:
    // CLRPT_1R, EDU_1r, EEU_1r, FREER_1r, MJOIN_1r, MSYNC_1r, SYNCR_1r, TSTA...
    O << ']'; 
    return;
    break;
  case 6:
    // ENDIN_2r, GETD_l2r, GETN_l2r, GETST_2r, GETTS_2r, INCT_2r, INPW_l2rus,...
    O << ", res["; 
    break;
  case 7:
    // GETPS_l2r
    O << ", ps["; 
    printOperand(MI, 1, O); 
    O << ']'; 
    return;
    break;
  case 8:
    // INITCP_2r
    O << "]:cp, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 9:
    // INITDP_2r
    O << "]:dp, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 10:
    // INITLR_l2r
    O << "]:lr, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 11:
    // INITPC_2r
    O << "]:pc, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 12:
    // INITSP_2r
    O << "]:sp, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 13:
    // LDAWDP_lru6, LDAWDP_ru6, LDWDP_lru6, LDWDP_ru6, STWDP_lru6, STWDP_ru6
    O << ", dp["; 
    printMemOperand(MI, 1, O); 
    O << ']'; 
    return;
    break;
  case 14:
    // LDAWSP_lru6, LDAWSP_lru6_RRegs, LDAWSP_ru6, LDAWSP_ru6_RRegs, LDWSP_lr...
    O << ", sp["; 
    printOperand(MI, 1, O); 
    O << ']'; 
    return;
    break;
  case 15:
    // LDWCP_lru6, LDWCP_ru6
    O << ", cp["; 
    printOperand(MI, 1, O); 
    O << ']'; 
    return;
    break;
  case 16:
    // SETEV_1r, SETV_1r
    O << "], r11"; 
    return;
    break;
  }


  // Fragment 2 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 19) & 7) {
  default:   // unreachable.
  case 0:
    // ADD_2rus, ADD_3r, AND_3r, ASHR_l2rus, ASHR_l3r, BITREV_l2r, BRFF_lru6,...
    printOperand(MI, 1, O); 
    break;
  case 1:
    // ANDNOT_2r, CRC_l3r, INSHR_2r, SEXT_2r, SEXT_rus, ZEXT_2r, ZEXT_rus
    printOperand(MI, 2, O); 
    break;
  case 2:
    // BR_JT
    printInlineJT(MI, 0, O); 
    return;
    break;
  case 3:
    // BR_JT32
    printInlineJT32(MI, 0, O); 
    return;
    break;
  case 4:
    // CRC8_l4r, LADD_l5r, LSUB_l5r, OUTPW_l2rus
    printOperand(MI, 0, O); 
    O << ", "; 
    break;
  case 5:
    // LDAWFI, LDWFI, STWFI
    printMemOperand(MI, 1, O); 
    return;
    break;
  }


  // Fragment 3 encoded into 3 bits for 8 unique commands.
  switch ((Bits >> 22) & 7) {
  default:   // unreachable.
  case 0:
    // ADD_2rus, ADD_3r, AND_3r, ASHR_l2rus, ASHR_l3r, CRC_l3r, DIVS_l3r, DIV...
    O << ", "; 
    break;
  case 1:
    // ANDNOT_2r, BITREV_l2r, BRFF_lru6, BRFF_ru6, BRFT_lru6, BRFT_ru6, BYTER...
    return;
    break;
  case 2:
    // CRC8_l4r
    printOperand(MI, 3, O); 
    O << ", "; 
    printOperand(MI, 4, O); 
    return;
    break;
  case 3:
    // ENDIN_2r, GETD_l2r, GETN_l2r, GETST_2r, GETTS_2r, INCT_2r, INSHR_2r, I...
    O << ']'; 
    return;
    break;
  case 4:
    // INPW_l2rus
    O << "], "; 
    printOperand(MI, 2, O); 
    return;
    break;
  case 5:
    // LADD_l5r, LSUB_l5r, OUTPW_l2rus
    printOperand(MI, 2, O); 
    break;
  case 6:
    // LD16S_3r, LD8U_3r, LDA16F_l3r, LDAWF_l2rus, LDAWF_l3r, LDW_2rus, LDW_3...
    O << '['; 
    printOperand(MI, 2, O); 
    O << ']'; 
    return;
    break;
  case 7:
    // LDA16B_l3r, LDAWB_l2rus, LDAWB_l3r
    O << "[-"; 
    printOperand(MI, 2, O); 
    O << ']'; 
    return;
    break;
  }


  // Fragment 4 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 25) & 7) {
  default:   // unreachable.
  case 0:
    // ADD_2rus, ADD_3r, AND_3r, ASHR_l2rus, ASHR_l3r, DIVS_l3r, DIVU_l3r, EQ...
    printOperand(MI, 2, O); 
    break;
  case 1:
    // CRC_l3r
    printOperand(MI, 3, O); 
    return;
    break;
  case 2:
    // LADD_l5r, LSUB_l5r
    O << ", "; 
    printOperand(MI, 3, O); 
    O << ", "; 
    printOperand(MI, 4, O); 
    return;
    break;
  case 3:
    // LDIVU_l5r, MACCS_l4r, MACCU_l4r
    printOperand(MI, 4, O); 
    O << ", "; 
    break;
  case 4:
    // OUTPW_l2rus
    return;
    break;
  }


  // Fragment 5 encoded into 2 bits for 4 unique commands.
  switch ((Bits >> 28) & 3) {
  default:   // unreachable.
  case 0:
    // ADD_2rus, ADD_3r, AND_3r, ASHR_l2rus, ASHR_l3r, DIVS_l3r, DIVU_l3r, EQ...
    return;
    break;
  case 1:
    // LDIVU_l5r
    printOperand(MI, 2, O); 
    O << ", "; 
    printOperand(MI, 3, O); 
    return;
    break;
  case 2:
    // LMUL_l6r
    O << ", "; 
    printOperand(MI, 3, O); 
    O << ", "; 
    printOperand(MI, 4, O); 
    O << ", "; 
    printOperand(MI, 5, O); 
    return;
    break;
  case 3:
    // MACCS_l4r, MACCU_l4r
    printOperand(MI, 5, O); 
    return;
    break;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *XCoreInstPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 17 && "Invalid register number!");

  static const char AsmStrs[] = {
  /* 0 */ 'r', '1', '0', 0,
  /* 4 */ 'r', '0', 0,
  /* 7 */ 'r', '1', '1', 0,
  /* 11 */ 'r', '1', 0,
  /* 14 */ 'r', '2', 0,
  /* 17 */ 'r', '3', 0,
  /* 20 */ 'r', '4', 0,
  /* 23 */ 'r', '5', 0,
  /* 26 */ 'r', '6', 0,
  /* 29 */ 'r', '7', 0,
  /* 32 */ 'r', '8', 0,
  /* 35 */ 'r', '9', 0,
  /* 38 */ 'c', 'p', 0,
  /* 41 */ 'd', 'p', 0,
  /* 44 */ 's', 'p', 0,
  /* 47 */ 'l', 'r', 0,
  };

  static const uint32_t RegAsmOffset[] = {
    38, 41, 47, 4, 11, 14, 17, 20, 23, 26, 29, 32, 35, 0, 
    7, 44, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}

#ifdef PRINT_ALIAS_INSTR
#undef PRINT_ALIAS_INSTR

bool XCoreInstPrinter::printAliasInstr(const MCInst *MI, raw_ostream &OS) {
  return false;
}

#endif // PRINT_ALIAS_INSTR