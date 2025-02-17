cmake_minimum_required(VERSION 3.5)

project(test_ncurses LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(test_ncurses main.cpp)
target_link_libraries(test_ncurses PRIVATE ${CURSES_LIBRARY})
