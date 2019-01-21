cmake_minimum_required(VERSION 3.1)

# Project
project(OpenFileDialog)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(OpenFileDialog WIN32 MACOSX_BUNDLE src/OpenFileDialog.cpp)
target_link_libraries(OpenFileDialog Qt5::Widgets)
