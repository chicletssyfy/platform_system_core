/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LIBUNWINDSTACK_MACHINE_H
#define _LIBUNWINDSTACK_MACHINE_H

#include <stdint.h>

enum ArmReg : uint16_t {
  ARM_REG_R0 = 0,
  ARM_REG_R1,
  ARM_REG_R2,
  ARM_REG_R3,
  ARM_REG_R4,
  ARM_REG_R5,
  ARM_REG_R6,
  ARM_REG_R7,
  ARM_REG_R8,
  ARM_REG_R9,
  ARM_REG_R10,
  ARM_REG_R11,
  ARM_REG_R12,
  ARM_REG_R13,
  ARM_REG_R14,
  ARM_REG_R15,
  ARM_REG_LAST,

  ARM_REG_SP = ARM_REG_R13,
  ARM_REG_LR = ARM_REG_R14,
  ARM_REG_PC = ARM_REG_R15,
};

enum Arm64Reg : uint16_t {
  ARM64_REG_R0 = 0,
  ARM64_REG_R1,
  ARM64_REG_R2,
  ARM64_REG_R3,
  ARM64_REG_R4,
  ARM64_REG_R5,
  ARM64_REG_R6,
  ARM64_REG_R7,
  ARM64_REG_R8,
  ARM64_REG_R9,
  ARM64_REG_R10,
  ARM64_REG_R11,
  ARM64_REG_R12,
  ARM64_REG_R13,
  ARM64_REG_R14,
  ARM64_REG_R15,
  ARM64_REG_R16,
  ARM64_REG_R17,
  ARM64_REG_R18,
  ARM64_REG_R19,
  ARM64_REG_R20,
  ARM64_REG_R21,
  ARM64_REG_R22,
  ARM64_REG_R23,
  ARM64_REG_R24,
  ARM64_REG_R25,
  ARM64_REG_R26,
  ARM64_REG_R27,
  ARM64_REG_R28,
  ARM64_REG_R29,
  ARM64_REG_R30,
  ARM64_REG_R31,
  ARM64_REG_PC,
  ARM64_REG_LAST,

  ARM64_REG_SP = ARM64_REG_R31,
  ARM64_REG_LR = ARM64_REG_R30,
};

// Matches the numbers for the registers as generated by compilers.
// If this is changed, then unwinding will fail.
enum X86Reg : uint16_t {
  X86_REG_EAX = 0,
  X86_REG_ECX = 1,
  X86_REG_EDX = 2,
  X86_REG_EBX = 3,
  X86_REG_ESP = 4,
  X86_REG_EBP = 5,
  X86_REG_ESI = 6,
  X86_REG_EDI = 7,
  X86_REG_EIP = 8,
  X86_REG_EFL = 9,
  X86_REG_CS = 10,
  X86_REG_SS = 11,
  X86_REG_DS = 12,
  X86_REG_ES = 13,
  X86_REG_FS = 14,
  X86_REG_GS = 15,
  X86_REG_LAST,

  X86_REG_SP = X86_REG_ESP,
  X86_REG_PC = X86_REG_EIP,
};

// Matches the numbers for the registers as generated by compilers.
// If this is changed, then unwinding will fail.
enum X86_64Reg : uint16_t {
  X86_64_REG_RAX = 0,
  X86_64_REG_RDX = 1,
  X86_64_REG_RCX = 2,
  X86_64_REG_RBX = 3,
  X86_64_REG_RSI = 4,
  X86_64_REG_RDI = 5,
  X86_64_REG_RBP = 6,
  X86_64_REG_RSP = 7,
  X86_64_REG_R8 = 8,
  X86_64_REG_R9 = 9,
  X86_64_REG_R10 = 10,
  X86_64_REG_R11 = 11,
  X86_64_REG_R12 = 12,
  X86_64_REG_R13 = 13,
  X86_64_REG_R14 = 14,
  X86_64_REG_R15 = 15,
  X86_64_REG_RIP = 16,
  X86_64_REG_LAST,

  X86_64_REG_SP = X86_64_REG_RSP,
  X86_64_REG_PC = X86_64_REG_RIP,
};

#endif  // _LIBUNWINDSTACK_MACHINE_H
