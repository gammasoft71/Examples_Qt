cmake_minimum_required(VERSION 3.1)

# Project
project(Panel)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(Panel WIN32 MACOSX_BUNDLE src/Panel.cpp)
target_link_libraries(Panel Qt5::Widgets)
