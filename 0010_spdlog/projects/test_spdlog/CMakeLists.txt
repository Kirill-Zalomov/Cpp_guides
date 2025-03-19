cmake_minimum_required(VERSION 3.10)

project(test_spdlog)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT TARGET spdlog)
    find_package(spdlog REQUIRED)
endif()

add_executable(test_spdlog main.cpp)
target_link_libraries(test_spdlog PRIVATE spdlog::spdlog)


