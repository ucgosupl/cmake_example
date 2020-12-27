cmake_minimum_required(VERSION 3.10)

project(cmake_example_01)

include_directories(
    inc
)

add_definitions(
    -DEXAMPLE_DEFINE
)

link_directories(
    lib
)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-Wall -Wextra -Og")

set(CMAKE_EXE_LINKER_FLAGS "-Wl,-Map=${CMAKE_PROJECT_NAME}.map -Wl,--gc-sections")

add_executable(${CMAKE_PROJECT_NAME}
    main.c
)

target_link_libraries(${CMAKE_PROJECT_NAME} m)
