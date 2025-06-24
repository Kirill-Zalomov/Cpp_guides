cmake_minimum_required(VERSION 3.14)
project(MyProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Catch2 REQUIRED)
include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(my_program src/main.cpp src/math_utils.cpp inc/math_utils.h)
add_executable(tests tests/test_math_utils.cpp src/math_utils.cpp inc/math_utils.h)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

enable_testing()
add_test(NAME tests COMMAND tests)

