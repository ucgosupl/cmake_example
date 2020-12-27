cmake_minimum_required(VERSION 3.10)

project(cmake_example_02 VERSION 1.0.1)

configure_file(version.h.in inc/version.h)

include_directories(
    ${CMAKE_BINARY_DIR}/inc
)

add_executable(${CMAKE_PROJECT_NAME}
    main.c
)
