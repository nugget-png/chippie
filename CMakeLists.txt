cmake_minimum_required(VERSION 3.10)

project(Chippie LANGUAGES C ASM)

option(BUILD_EMULATOR "Build the Chippie emulator" ON)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_EMULATOR ${CMAKE_BINARY_DIR}/bin/emulator)

if(BUILD_EMULATOR)
    add_subdirectory(chippiemu)

    # Set the output directory for the emulator
    set_target_properties(chippiemu PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_EMULATOR})
endif()

message(STATUS "Chippie Build Configuration:")
message(STATUS "  - Build Emulator: ${BUILD_EMULATOR}")

