cmake_minimum_required(VERSION 3.10)

project(test_crow CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Crow REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

add_executable(test_crow main.cpp)

target_link_libraries(test_crow Crow::Crow OpenSSL::SSL OpenSSL::Crypto ZLIB::ZLIB)
