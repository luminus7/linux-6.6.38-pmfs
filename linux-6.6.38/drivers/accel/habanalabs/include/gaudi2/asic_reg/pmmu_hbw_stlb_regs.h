/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_PMMU_HBW_STLB_REGS_H_
#define ASIC_REG_PMMU_HBW_STLB_REGS_H_

/*
 *****************************************
 *   PMMU_HBW_STLB
 *   (Prototype: STLB)
 *****************************************
 */

#define mmPMMU_HBW_STLB_BUSY 0x4D01000

#define mmPMMU_HBW_STLB_ASID 0x4D01004

#define mmPMMU_HBW_STLB_HOP0_PA43_12 0x4D01008

#define mmPMMU_HBW_STLB_HOP0_PA63_44 0x4D0100C

#define mmPMMU_HBW_STLB_CACHE_INV 0x4D01010

#define mmPMMU_HBW_STLB_CACHE_INV_BASE_39_8 0x4D01014

#define mmPMMU_HBW_STLB_CACHE_INV_BASE_63_40 0x4D01018

#define mmPMMU_HBW_STLB_STLB_FEATURE_EN 0x4D0101C

#define mmPMMU_HBW_STLB_STLB_AXI_CACHE 0x4D01020

#define mmPMMU_HBW_STLB_HOP_CONFIGURATION 0x4D01024

#define mmPMMU_HBW_STLB_LINK_LIST_LOOKUP_MASK_63_32 0x4D01028

#define mmPMMU_HBW_STLB_LINK_LIST_LOOKUP_MASK_31_0 0x4D0102C

#define mmPMMU_HBW_STLB_INV_ALL_START 0x4D01034

#define mmPMMU_HBW_STLB_INV_ALL_SET 0x4D01038

#define mmPMMU_HBW_STLB_INV_PS 0x4D0103C

#define mmPMMU_HBW_STLB_INV_CONSUMER_INDEX 0x4D01040

#define mmPMMU_HBW_STLB_INV_HIT_COUNT 0x4D01044

#define mmPMMU_HBW_STLB_INV_SET 0x4D01048

#define mmPMMU_HBW_STLB_SRAM_INIT 0x4D0104C

#define mmPMMU_HBW_STLB_MEM_CACHE_INVALIDATION 0x4D01050

#define mmPMMU_HBW_STLB_MEM_CACHE_INV_STATUS 0x4D01054

#define mmPMMU_HBW_STLB_MEM_CACHE_BASE_38_7 0x4D01058

#define mmPMMU_HBW_STLB_MEM_CACHE_BASE_63_39 0x4D0105C

#define mmPMMU_HBW_STLB_MEM_CACHE_CONFIG 0x4D01060

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP5 0x4D01064

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP4 0x4D01068

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP3 0x4D0106C

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP2 0x4D01070

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP1 0x4D01074

#define mmPMMU_HBW_STLB_SET_THRESHOLD_HOP0 0x4D01078

#define mmPMMU_HBW_STLB_MULTI_HIT_INTERRUPT_CLR 0x4D0107C

#define mmPMMU_HBW_STLB_MULTI_HIT_INTERRUPT_MASK 0x4D01080

#define mmPMMU_HBW_STLB_MEM_L0_CACHE_CFG 0x4D01084

#define mmPMMU_HBW_STLB_MEM_READ_ARPROT 0x4D01088

#define mmPMMU_HBW_STLB_RANGE_CACHE_INVALIDATION 0x4D0108C

#define mmPMMU_HBW_STLB_RANGE_INV_START_LSB 0x4D01090

#define mmPMMU_HBW_STLB_RANGE_INV_START_MSB 0x4D01094

#define mmPMMU_HBW_STLB_RANGE_INV_END_LSB 0x4D01098

#define mmPMMU_HBW_STLB_RANGE_INV_END_MSB 0x4D0109C

#define mmPMMU_HBW_STLB_ASID_SCRAMBLER_CTRL 0x4D01100

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_0 0x4D01104

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_1 0x4D01108

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_2 0x4D0110C

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_3 0x4D01110

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_4 0x4D01114

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_5 0x4D01118

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_6 0x4D0111C

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_7 0x4D01120

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_8 0x4D01124

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MATRIX_H3_9 0x4D01128

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_10 0x4D0112C

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_11 0x4D01130

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_12 0x4D01134

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_13 0x4D01138

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_14 0x4D0113C

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_15 0x4D01140

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_16 0x4D01144

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_17 0x4D01148

#define mmPMMU_HBW_STLB_ASID_SCR_POLY_MAT_H3_18 0x4D0114C

#endif /* ASIC_REG_PMMU_HBW_STLB_REGS_H_ */