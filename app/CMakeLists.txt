cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_BUILD_TYPE Debug)
project(sampleproj)

add_executable(sampleproj main.cpp)
target_link_libraries(sampleproj PUBLIC Common)

target_include_directories(sampleproj PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${CMAKE_SOURCE_DIR}/lib"
                           )

