cmake_minimum_required(VERSION 3.10.2)

project(tests)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} test_calculations.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE calculations gtest gtest_main)
