cmake_minimum_required(VERSION 3.10)
project(book VERSION 1.0 LANGUAGES CXX)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

add_executable(example1
    "example1.cpp"
)
