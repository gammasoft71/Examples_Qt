cmake_minimum_required(VERSION 3.1)

# Project
project(TreeView2)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TreeView2 WIN32 MACOSX_BUNDLE src/TreeView2.cpp src/TreeView2.h)
target_link_libraries(TreeView2 Qt5::Widgets)
