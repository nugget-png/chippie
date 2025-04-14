project(chippiemu LANGUAGES C)

add_executable(chippiemu
    src/main.c
    src/cpu.c
    src/memory.c
)