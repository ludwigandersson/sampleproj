cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)

add_library(Common common.cpp)
