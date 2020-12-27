cmake_minimum_required(VERSION 3.10)

project(cmake_example_02 VERSION 1.0.1)

execute_process(
        COMMAND git rev-parse HEAD
        OUTPUT_VARIABLE GIT_COMMIT)

execute_process(
        COMMAND git rev-parse --abbrev-ref HEAD
        OUTPUT_VARIABLE GIT_BRANCH)

configure_file(version.h.in inc/version.h)

include_directories(
    ${CMAKE_BINARY_DIR}/inc
)

add_executable(${CMAKE_PROJECT_NAME}
    main.c
)
