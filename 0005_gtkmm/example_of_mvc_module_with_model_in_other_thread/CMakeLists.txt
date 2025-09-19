cmake_minimum_required(VERSION 3.16)
project(StatusModule)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

add_executable(status_module
    main.cpp
    status_model.cpp
    status_view.cpp
    status_controller.cpp
    status_module.cpp
)

target_link_libraries(status_module ${GTKMM_LIBRARIES})
