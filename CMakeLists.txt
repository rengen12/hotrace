cmake_minimum_required(VERSION 3.8)
project(hotrace)
set(CMAKE_C_STANDARD 99)

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Werror -Wconversion")
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

set(SOURCE_FILES main.c get_next_line.c ft_query.h ft_push_word.c ft_new_branch.c)
add_executable(hotrace ${SOURCE_FILES})