cmake_minimum_required(VERSION 3.14)
project(unittesst)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(../lib lib)

add_executable(
  hello_test
  hello_test.cc
)

target_link_libraries(
  hello_test
  GTest::gtest_main
  Common
)
include(GoogleTest)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)

gtest_discover_tests(hello_test)