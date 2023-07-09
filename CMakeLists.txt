cmake_minimum_required (VERSION 3.8)

project(Solution C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY build/bin/)

add_executable(Solution solution.c lib/fibonacci.c lib/leapyear.c lib/swap_values.c lib/transpose_matrix.c lib/vowel.c)
