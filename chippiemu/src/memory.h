#ifndef CHIPPIEMU_MEMORY_H
#define CHIPPIEMU_MEMORY_H

#include <stdint.h>

#define MEMORY_SIZE 131072 /* 128KB of memory */

typedef struct Memory {
    uint8_t data[MEMORY_SIZE];
} Memory;

void memory_init(Memory* memory, uint8_t* initdata);
uint8_t memory_read(Memory* memory, uint16_t address);
void memory_write(Memory* memory, uint16_t address, uint8_t value);

#endif