#ifndef CHIPPIEMU_CPU_H
#define CHIPPIEMU_CPU_H

#include <stdint.h>
#include "memory.h"

/* Processor status flags */
#define FLAG_C 0x01 /* Carry*/
#define FLAG_Z 0x02 /* Zero */
#define FLAG_I 0x04 /* Interrupt Disable */
#define FLAG_D 0x08 /* Decimal Mode */
#define FLAG_B 0x10 /* Break */
#define FLAG_R 0x20 /* Reserved */
#define FLAG_V 0x40 /* Overflow */
#define FLAG_N 0x80 /* Negative */
#define FLAG_DEFAULT 0x32 /* Default Flag */

#define PC_STARTING_ADDR 0x8000 /* PC Starting Address */

#define ADC_INDEXED_INDIRECT 0x61 /* Add With Carry (Indexed Indirect)*/
#define ADC_STACK_RELATIVE   0x63 /* Add With Carry (Stack Relative)*/
#define ADC_DIRECT_PAGE      0x65 /* Add With Carry (Direct Page)*/
#define ADC_INDIRECT_LONG    0x67 /* Add With Carry (Indirect Long)*/
#define ADC_IMMEDIATE        0x69 /* Add With Carry (Immediate)*/
#define ADC_ABSOLUTE         0x6F /* Add With Carry (Absolute)*/
#define ADC_ABSOLUTE_LONG    0x6D /* Add With Carry (Absolute Long)*/
#define ADC_INDIRECT_INDEXED 0x71 /* Add With Carry (Indirect Indexed)*/
#define ADC_INDIRECT         0x72 /* Add With Carry (Indirect)*/


/* Note: The CPU will always run in 8-bit mode,
 * so the registers will be 8 bits wide. 
 */

typedef struct CPU {
    uint8_t a;      /* Accumulator */
    uint8_t dbr;    /* Data Bank Register */
    uint8_t d;      /* Direct Register */
    uint8_t x;      /* Index Register X */
    uint8_t y;      /* Index Register Y */
    uint8_t p;      /* Processor Status Register */
    uint8_t pbr;    /* Program Bank Register */
    uint8_t pc;     /* Program Counter */
    uint8_t sp;     /* Stack Pointer */
    Memory* memory; /* System Memory */
} CPU;

void cpu_init(CPU* cpu);
void cpu_reset(CPU* cpu);
void cpu_step(CPU* cpu);

void cpu_set_flag(CPU* cpu, uint8_t flag);
uint8_t cpu_get_flag(CPU* cpu);

void cpu_push_stack(CPU* cpu, uint8_t value);
uint16_t cpu_pop_stack(CPU* cpu);

void cpu_read_operand(CPU* cpu);
void cpu_fetch_instruction(CPU* cpu);
void cpu_execute_instruction(CPU* cpu, uint8_t opcode);
void cpu_handle_interrupt(CPU* cpu);
void cpu_update_zero_and_negative(CPU* cpu, uint8_t result);

void cpu_address_mode_implied(CPU* cpu);
void cpu_address_mode_accumulator(CPU* cpu);
void cpu_address_mode_immediate(CPU* cpu);
void cpu_address_mode_relative(CPU* cpu);
void cpu_address_mode_relative_long(CPU* cpu);

void cpu_address_mode_direct(CPU* cpu);
void cpu_address_mode_direct_x(CPU* cpu);
void cpu_address_mode_direct_y(CPU* cpu);
void cpu_address_mode_direct_indirect(CPU* cpu);
void cpu_address_mode_direct_indexed_indirect(CPU* cpu);
void cpu_address_mode_direct_indirect_indexed(CPU* cpu);
void cpu_address_mode_direct_indirect_long(CPU* cpu);
void cpu_address_mode_direct_indirect_long_indexed(CPU* cpu);

void cpu_address_mode_absolute(CPU* cpu);
void cpu_address_mode_absolute_x(CPU* cpu);
void cpu_address_mode_absolute_y(CPU* cpu);
void cpu_address_mode_absolute_long(CPU* cpu);
void cpu_address_mode_absolute_long_x(CPU* cpu);
void cpu_address_mode_absolute_indirect(CPU* cpu);
void cpu_address_mode_absolute_indirect_long(CPU* cpu);
void cpu_address_mode_absolute_indexed_indirect(CPU* cpu);

void cpu_address_mode_stack_relative(CPU* cpu);
void cpu_address_mode_stack_relative_indirect_y(CPU* cpu);

void cpu_address_mode_block_move(CPU* cpu); /* MVP/MVN instructions */

#endif // CHIPPIEMU_CPU_H