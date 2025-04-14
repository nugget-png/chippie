#include "memory.h"


void memory_init(Memory* memory, uint8_t* initdata) {
    /* Initialize memory to initdata if it exists */
    if (initdata != 0) {
        for (int i = 0; i < MEMORY_SIZE; i++) {
            memory->data[i] = initdata[i];
        }
    }
    else {
        /* Otherwise, initialize all bits to 0 */
        for (int i = 0; i < MEMORY_SIZE; i++) {
            memory->data[i] = 0;
        }
    }
}

uint8_t memory_read(Memory* memory, uint16_t address) {
    if (address < MEMORY_SIZE) {
        return memory->data[address];
    } 

    printf("Warning: attempted to read an out of bounds address in memory");
    return 0; /* Return 0 if out of bounds */
}

void memory_write(Memory* memory, uint16_t address, uint8_t value) {
    /* Only write the value if it's not out of bounds */
    if (address < MEMORY_SIZE) {
        memory->data[address] = value;
    }
}