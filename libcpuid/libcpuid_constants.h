/*
 * Copyright 2008  Veselin Georgiev,
 * anrieffNOSPAM @ mgail_DOT.com (convert to gmail)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 * @File     libcpuid_constants.h
 * @Author   Veselin Georgiev
 * @Brief    Some limits and constants for libcpuid
 */

#ifndef __LIBCPUID_CONSTANTS_H__
#define __LIBCPUID_CONSTANTS_H__

#define VENDOR_STR_MAX		16
#define BRAND_STR_MAX		64
#define CODENAME_STR_MAX	64
#define TECHNOLOGY_STR_MAX	16
#define CPU_FLAGS_MAX		384
#define MAX_CPUID_LEVEL		32
#define MAX_EXT_CPUID_LEVEL	32
#define MAX_INTELFN4_LEVEL	8
#define MAX_INTELFN11_LEVEL	4
#define MAX_INTELFN12H_LEVEL	4
#define MAX_INTELFN14H_LEVEL	4
#define MAX_AMDFN8000001DH_LEVEL 4
#define MAX_AMDFN80000026H_LEVEL 4
#define MAX_ARM_ID_AFR_REGS			1
#define MAX_ARM_ID_DFR_REGS			2
#define MAX_ARM_ID_ISAR_REGS		7
#define MAX_ARM_ID_MMFR_REGS		6
#define MAX_ARM_ID_PFR_REGS			3
#define MAX_ARM_ID_AA64AFR_REGS		2
#define MAX_ARM_ID_AA64DFR_REGS		3
#define MAX_ARM_ID_AA64FPFR_REGS	1
#define MAX_ARM_ID_AA64ISAR_REGS	4
#define MAX_ARM_ID_AA64MMFR_REGS	5
#define MAX_ARM_ID_AA64PFR_REGS		3
#define MAX_ARM_ID_AA64SMFR_REGS	1
#define MAX_ARM_ID_AA64ZFR_REGS		1
#define CPU_HINTS_MAX		16
#define SGX_FLAGS_MAX		14
#define ADDRESS_EXT_CPUID_START	0x80000000
#define ADDRESS_EXT_CPUID_END	ADDRESS_EXT_CPUID_START + MAX_EXT_CPUID_LEVEL
#define UNKN_STR "unknown"

typedef enum {
	EAX,
	EBX,
	ECX,
	EDX,
	/* termination: */
	NUM_REGS,
} cpu_registers_t;

#endif /* __LIBCPUID_CONSTANTS_H__ */
