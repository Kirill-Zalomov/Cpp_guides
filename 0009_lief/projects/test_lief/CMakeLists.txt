cmake_minimum_required(VERSION 3.10)

project(lief_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(LIEF_DIR "/usr/lib/cmake/LIEF/")
find_package(LIEF REQUIRED COMPONENTS STATIC)

add_executable(lief_test main.cpp)
target_link_libraries(lief_test PRIVATE LIEF::LIEF)

