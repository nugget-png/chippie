#ifndef CHIPPIEMU_CPU_OPCODES_H
#define CHIPPIEMU_CPU_OPCODES_H

/*=====ARITHMETIC OPERATIONS=====*/
/* ADC - Add with Carry */
#define ADC_IMM         0x69  /* Add with Carry. Immediate */
#define ADC_ZP          0x65  /* Add with Carry. Zero Page */
#define ADC_ZP_X        0x75  /* Add with Carry. Zero Page, X */
#define ADC_ABS         0x6D  /* Add with Carry. Absolute */
#define ADC_ABS_X       0x7D  /* Add with Carry. Absolute, X */
#define ADC_ABS_Y       0x79  /* Add with Carry. Absolute, Y */
#define ADC_IND_X       0x61  /* Add with Carry. Indirect, X */
#define ADC_IND_Y       0x71  /* Add with Carry. Indirect, Y */

/* SBC - Subtract with Carry */
#define SBC_IMM         0xE9  /* Subtract with Carry. Immediate */
#define SBC_ZP          0xE5  /* Subtract with Carry. Zero Page */
#define SBC_ZP_X        0xF5  /* Subtract with Carry. Zero Page, X */
#define SBC_ABS         0xED  /* Subtract with Carry. Absolute */
#define SBC_ABS_X       0xFD  /* Subtract with Carry. Absolute, X */
#define SBC_ABS_Y       0xF9  /* Subtract with Carry. Absolute, Y */
#define SBC_IND_X       0xE1  /* Subtract with Carry. Indirect, X */
#define SBC_IND_Y       0xF1  /* Subtract with Carry. Indirect, Y */

/* ASL - Arithmetic Shift Left */
#define ASL_ACC         0x0A  /* Arithmetic Shift Left. Accumulator */
#define ASL_ZP          0x06  /* Arithmetic Shift Left. Zero Page */
#define ASL_ZP_X        0x16  /* Arithmetic Shift Left. Zero Page, X */
#define ASL_ABS         0x0E  /* Arithmetic Shift Left. Absolute */
#define ASL_ABS_X       0x1E  /* Arithmetic Shift Left. Absolute, X */

/* LSR - Logical Shift Right */
#define LSR_ACC         0x4A  /* Logical Shift Right. Accumulator */
#define LSR_ZP          0x46  /* Logical Shift Right. Zero Page */
#define LSR_ZP_X        0x56  /* Logical Shift Right. Zero Page, X */
#define LSR_ABS         0x4E  /* Logical Shift Right. Absolute */
#define LSR_ABS_X       0x5E  /* Logical Shift Right. Absolute, X */

/* ROR - Rotate Right */
#define ROR_ACC         0x6A  /* Rotate Right. Accumulator */
#define ROR_ZP          0x66  /* Rotate Right. Zero Page */
#define ROR_ZP_X        0x76  /* Rotate Right. Zero Page, X */
#define ROR_ABS         0x6E  /* Rotate Right. Absolute */
#define ROR_ABS_X       0x7E  /* Rotate Right. Absolute, X */

/* ROL - Rotate Left */
#define ROL_ACC         0x2A  /* Rotate Left. Accumulator */
#define ROL_ZP          0x26  /* Rotate Left. Zero Page */
#define ROL_ZP_X        0x36  /* Rotate Left. Zero Page, X */
#define ROL_ABS         0x2E  /* Rotate Left. Absolute */
#define ROL_ABS_X       0x3E  /* Rotate Left. Absolute, X */

/* INC - Increment Memory */
#define INC_ZP          0xE6  /* Increment Memory. Zero Page */
#define INC_ZP_X        0xF6  /* Increment Memory. Zero Page, X */
#define INC_ABS         0xEE  /* Increment Memory. Absolute */
#define INC_ABS_X       0xFE  /* Increment Memory. Absolute, X */

/* DEC - Decrement Memory */
#define DEC_ZP          0xC6  /* Decrement Memory. Zero Page */
#define DEC_ZP_X        0xD6  /* Decrement Memory. Zero Page, X */
#define DEC_ABS         0xCE  /* Decrement Memory. Absolute */
#define DEC_ABS_X       0xDE  /* Decrement Memory. Absolute, X */

/* CMP - Compare */
#define CMP_IMM         0xC9  /* Compare. Immediate */
#define CMP_ZP          0xC5  /* Compare. Zero Page */
#define CMP_ZP_X        0xD5  /* Compare. Zero Page, X */
#define CMP_ABS         0xCD  /* Compare. Absolute */
#define CMP_ABS_X       0xDD  /* Compare. Absolute, X */
#define CMP_ABS_Y       0xD9  /* Compare. Absolute, Y */
#define CMP_IND_X       0xC1  /* Compare. Indirect, X */
#define CMP_IND_Y       0xD1  /* Compare. Indirect, Y */

/* CPX - Compare X Register */
#define CPX_IMM         0xE0  /* Compare X Register. Immediate */
#define CPX_ZP          0xE4  /* Compare X Register. Zero Page */
#define CPX_ABS         0xEC  /* Compare X Register. Absolute */

/* CPY - Compare Y Register */
#define CPY_IMM         0xC0  /* Compare Y Register. Immediate */
#define CPY_ZP          0xC4  /* Compare Y Register. Zero Page */
#define CPY_ABS         0xCC  /* Compare Y Register. Absolute */

/*=====LOGICAL OPERATIONS=====*/
/* EOR - Exclusive-OR */
#define EOR_IMM         0x49  /* Exclusive-OR. Immediate */
#define EOR_ZP          0x45  /* Exclusive-OR. Zero Page */
#define EOR_ZP_X        0x55  /* Exclusive-OR. Zero Page, X */
#define EOR_ABS         0x4D  /* Exclusive-OR. Absolute */
#define EOR_ABS_X       0x5D  /* Exclusive-OR. Absolute, X */
#define EOR_ABS_Y       0x59  /* Exclusive-OR. Absolute, Y */
#define EOR_IND_X       0x41  /* Exclusive-OR. Indirect, X */
#define EOR_IND_Y       0x51  /* Exclusive-OR. Indirect, Y */

/* ORA - Logical OR */
#define ORA_IMM         0x09  /* Logical OR. Immediate */
#define ORA_ZP          0x05  /* Logical OR. Zero Page */
#define ORA_ZP_X        0x15  /* Logical OR. Zero Page, X */
#define ORA_ABS         0x0D  /* Logical OR. Absolute */
#define ORA_ABS_X       0x1D  /* Logical OR. Absolute, X */
#define ORA_ABS_Y       0x19  /* Logical OR. Absolute, Y */
#define ORA_IND_X       0x01  /* Logical OR. Indirect, X */
#define ORA_IND_Y       0x11  /* Logical OR. Indirect, Y */

/* AND - Logical AND */
#define AND_IMM         0x29  /* Logical AND. Immediate */
#define AND_ZP          0x25  /* Logical AND. Zero Page */
#define AND_ZP_X        0x35  /* Logical AND. Zero Page, X */
#define AND_ABS         0x2D  /* Logical AND. Absolute */
#define AND_ABS_X       0x3D  /* Logical AND. Absolute, X */
#define AND_ABS_Y       0x39  /* Logical AND. Absolute, Y */
#define AND_IND_X       0x21  /* Logical AND. Indirect, X */
#define AND_IND_Y       0x31  /* Logical AND. Indirect, Y */

/*=====INCREMENT/DECREMENT OPERATIONS=====*/
#define DEY             0x88  /* Decrement Y Register */
#define DEX             0xCA  /* Decrement X Register */
#define INY             0xC8  /* Increment Y Register */
#define INX             0xE8  /* Increment X Register */

/*=====CONTROL OPERATIONS=====*/
#define CLC             0x18  /* Clear Carry */
#define CLD             0xD8  /* Clear Decimal Mode */
#define CLI             0x58  /* Clear Interrupt */
#define CLV             0xB8  /* Clear Overflow */
#define SEC             0x38  /* Set Carry */
#define SED             0xF8  /* Set Decimal */
#define SEI             0x78  /* Set Interrupt */
#define NOP             0xEA  /* No Operation */
#define BRK             0x00  /* Break (Interrupt) */

/*=====BRANCH OPERATIONS===== */
#define BCC             0x90  /* Branch if Carry Clear */
#define BCS             0xB0  /* Branch if Carry Set */
#define BEQ             0xF0  /* Branch if Equal */
#define BMI             0x30  /* Branch if Minus */
#define BNE             0xD0  /* Branch if Not Equal */
#define BPL             0x10  /* Branch if Plus */
#define BRA             0x80  /* Branch Always */
#define BVC             0x50  /* Branch if Overflow Clear */
#define BVS             0x70  /* Branch if Overflow Set */

/*=====STACK OPERATIONS=====*/
#define PHA             0x48  /* Push Accumulator */
#define PHP             0x08  /* Push Processor Status */
#define PLA             0x68  /* Pull Accumulator */
#define PLP             0x28  /* Pull Processor Status */
#define RTS             0x60  /* Return from Subroutine */

/* =====MEMORY OPERATIONS===== */
/* LDA - Load Accumulator */
#define LDA_IMM         0xA9  /* Load Accumulator. Immediate */
#define LDA_ZP          0xA5  /* Load Accumulator. Zero Page */
#define LDA_ZP_X        0xB5  /* Load Accumulator. Zero Page, X */
#define LDA_ABS         0xAD  /* Load Accumulator. Absolute */
#define LDA_ABS_X       0xBD  /* Load Accumulator. Absolute, X */
#define LDA_ABS_Y       0xB9  /* Load Accumulator. Absolute, Y */
#define LDA_IND_X       0xA1  /* Load Accumulator. Indirect, X */
#define LDA_IND_Y       0xB1  /* Load Accumulator. Indirect, Y */

/* LDX - Load X Register */
#define LDX_IMM         0xA2  /* Load X Register. Immediate */
#define LDX_ZP          0xA6  /* Load X Register. Zero Page */
#define LDX_ZP_Y        0xB6  /* Load X Register. Zero Page, Y */
#define LDX_ABS         0xAE  /* Load X Register. Absolute */
#define LDX_ABS_Y       0xBE  /* Load X Register. Absolute, Y */

/* LDY - Load Y Register */
#define LDY_IMM         0xA0  /* Load Y Register. Immediate */
#define LDY_ZP          0xA4  /* Load Y Register. Zero Page */
#define LDY_ZP_X        0xB4  /* Load Y Register. Zero Page, X */
#define LDY_ABS         0xAC  /* Load Y Register. Absolute */
#define LDY_ABS_X       0xBC  /* Load Y Register. Absolute, X */

/* STA - Store Accumulator */
#define STA_ZP          0x85  /* Store Accumulator. Zero Page */
#define STA_ZP_X        0x95  /* Store Accumulator. Zero Page, X */
#define STA_ABS         0x8D  /* Store Accumulator. Absolute */
#define STA_ABS_X       0x9D  /* Store Accumulator. Absolute, X */
#define STA_ABS_Y       0x99  /* Store Accumulator. Absolute, Y */
#define STA_IND_X       0x81  /* Store Accumulator. Indirect, X */
#define STA_IND_Y       0x91  /* Store Accumulator. Indirect, Y */

/* STX - Store X Register */
#define STX_ZP          0x86  /* Store X Register. Zero Page */
#define STX_ZP_Y        0x96  /* Store X Register. Zero Page, Y */
#define STX_ABS         0x8E  /* Store X Register. Absolute */

/* STY - Store Y Register */
#define STY_ZP          0x84  /* Store Y Register. Zero Page */
#define STY_ABS         0x8C  /* Store Y Register. Absolute */

/*=====TRANSFER OPERATIONS=====*/
#define TAY             0xA8  /* Transfer Accumulator to Y Register */
#define TAX             0xAA  /* Transfer Accumulator to X Register */
#define TYA             0x98  /* Transfer Y Register to Accumulator */
#define TXA             0x8A  /* Transfer X Register to Accumulator */
#define TSX             0xBA  /* Transfer Stack Pointer to X Register */
#define TXS             0x9A  /* Transfer X Register to Stack Pointer */

/*=====BIT OPERATIONS=====*/
/* BIT - Test Bits In Memory */
#define BIT_ZP          0x24  /* Test Bits in Memory. Zero Page */
#define BIT_ABS         0x2C  /* Test Bits in Memory. Absolute */

/*=====OTHER OPERATIONS=====*/
/* JMP - Jump */
#define JMP_ABS         0x4C  /* Jump. Absolute */
#define JMP_IND         0x6C  /* Jump. Indirect */

/* JSR - Jump To Subroutine */
#define JSR_ABS         0x20  /* Jump to Subroutine. Absolute */

/* Misc */
#define RTI             0x40  /* Return from Interrupt */
#define WAI             0xCB  /* Wait for Interrupt */
#define STP             0xDB  /* Stop execution */

#endif
