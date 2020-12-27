cmake_minimum_required(VERSION 3.10)

project(cmake_example_01)

include_directories(
    inc
)

add_definitions(
    -DEXAMPLE_DEFINE
)

add_executable(${CMAKE_PROJECT_NAME}
    main.c
)
