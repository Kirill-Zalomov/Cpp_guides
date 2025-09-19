cmake_minimum_required(VERSION 3.10)

project(HelloWorldProject)

# Минимальная версия стандарта C++ для gtkmm 4.0
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(hello main.cpp helloworld.cpp)
target_link_libraries(hello ${GTKMM_LIBRARIES})
