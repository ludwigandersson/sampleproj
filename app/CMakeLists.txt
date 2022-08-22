cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
add_definitions(-std=c++17)
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "$(CXX_FLAGS)")

set(CMAKE_BUILD_TYPE Debug)
project(sampleproj)

add_executable(sampleproj main.cpp)
target_link_libraries(sampleproj PUBLIC Common)

target_include_directories(sampleproj PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/lib"
                           )
