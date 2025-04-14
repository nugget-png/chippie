#include "cpu.h"

/* Initialize the CPU */
void cpu_init(CPU* cpu) {
    cpu->a = 0;
    cpu->dbr = 0;
    cpu->d = 0;
    cpu->x = 0;
    cpu->y = 0;
    cpu->p = FLAG_DEFAULT;
    cpu->pbr = 0;
    cpu->pc = PC_STARTING_ADDR;
    cpu->sp = 0xFF; /* Stack pointer initialized to the top of the stack */
}

/* Reset the CPU */
void cpu_reset(CPU* cpu) {
    cpu->a = 0;
    cpu->dbr = 0;
    cpu->d = 0;
    cpu->x = 0;
    cpu->y = 0;
    cpu->p = FLAG_DEFAULT;
    cpu->pbr = 0;
    cpu->pc = PC_STARTING_ADDR;
    cpu->sp = 0xFF; /* Stack pointer initialized to the top of the stack */
}

void cpu_step(CPU* cpu) {

}

void cpu_set_flag(CPU* cpu, uint8_t flag) {

}

uint8_t cpu_get_flag(CPU* cpu) {

}

void cpu_push_stack(CPU* cpu, uint8_t value) {

}

uint16_t cpu_pop_stack(CPU* cpu) {

}

void cpu_read_operand(CPU* cpu) {

}


void cpu_fetch_instruction(CPU* cpu) {

}

void cpu_execute_instruction(CPU* cpu, uint8_t opcode) {
    switch(opcode) {
        
    }
}

void cpu_handle_interrupt(CPU* cpu) {

}

void cpu_update_zero_and_negative(CPU* cpu, uint8_t result) {

}

void cpu_address_mode_implied(CPU* cpu) {

}

void cpu_address_mode_accumulator(CPU* cpu) {

}

void cpu_address_mode_immediate(CPU* cpu) {

}
void cpu_address_mode_relative(CPU* cpu) {

}

void cpu_address_mode_relative_long(CPU* cpu) {

}

void cpu_address_mode_direct(CPU* cpu) {

}

void cpu_address_mode_direct_x(CPU* cpu) {

}

void cpu_address_mode_direct_y(CPU* cpu) {

}

void cpu_address_mode_direct_indirect(CPU* cpu) {

}

void cpu_address_mode_direct_indexed_indirect(CPU* cpu) {

}

void cpu_address_mode_direct_indirect_indexed(CPU* cpu) {

}

void cpu_address_mode_direct_indirect_long(CPU* cpu) {

}

void cpu_address_mode_direct_indirect_long_indexed(CPU* cpu) {

}

void cpu_address_mode_absolute(CPU* cpu) {

}

void cpu_address_mode_absolute_x(CPU* cpu) {

}

void cpu_address_mode_absolute_y(CPU* cpu) {

}

void cpu_address_mode_absolute_long(CPU* cpu) {

}

void cpu_address_mode_absolute_long_x(CPU* cpu) {

}

void cpu_address_mode_absolute_indirect(CPU* cpu) {

}

void cpu_address_mode_absolute_indirect_long(CPU* cpu) {

}

void cpu_address_mode_absolute_indexed_indirect(CPU* cpu) {

}

void cpu_address_mode_stack_relative(CPU* cpu) {

}

void cpu_address_mode_stack_relative_indirect_y(CPU* cpu) {

}

void cpu_address_mode_block_move(CPU* cpu) {

}