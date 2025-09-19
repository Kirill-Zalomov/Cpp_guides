cmake_minimum_required(VERSION 3.10)
project("module_dev" LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(GTKMM_VERSION "4.0")
set(GLIBMM_VERSION "2.68")


find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-${GTKMM_VERSION})
pkg_check_modules(GLIBMM REQUIRED glibmm-${GLIBMM_VERSION})
include_directories(${GTKMM_INCLUDE_DIRS})
include_directories(${GLIBMM_INCLUDE_DIRS})


set(SOURCES
    "src/main.cpp"
    "src/main_window.cpp"
    "src/modules/settings/boolean_setting_module/boolean_setting_module.cpp"
    "src/modules/settings/boolean_setting_module/mvc/boolean_setting_module_model.cpp"
    "src/modules/settings/boolean_setting_module/mvc/boolean_setting_module_view.cpp"
    "src/modules/settings/boolean_setting_module/mvc/boolean_setting_module_controller.cpp"
)


add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PUBLIC
    ${GTKMM_LIBRARIES}
    ${GLIBMM_LIBRARIES}
)
target_include_directories(${PROJECT_NAME} PUBLIC
    "inc/"
)
