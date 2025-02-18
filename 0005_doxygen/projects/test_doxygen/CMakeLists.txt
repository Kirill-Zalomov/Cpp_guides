cmake_minimum_required(VERSION 3.10)
project(SimpleProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall)

# Указываем директории для заголовочных файлов
include_directories(include)

# Добавляем исполняемый файл
add_executable(SimpleProject src/main.cpp src/MathOperations.cpp)
