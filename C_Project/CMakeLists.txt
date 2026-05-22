cmake_minimum_required(VERSION 3.10)

project(C_Project C)

add_library(math_functions math_functions.c)

add_executable(main main.c)
target_link_libraries(main math_functions)

add_executable(test_runner test.c)
target_link_libraries(test_runner math_functions)

enable_testing()

add_test(NAME unit_tests COMMAND test_runner)