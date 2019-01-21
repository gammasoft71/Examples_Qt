cmake_minimum_required(VERSION 3.1)

# Project
project(TextBox)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TextBox WIN32 MACOSX_BUNDLE src/TextBox.cpp)
target_link_libraries(TextBox Qt5::Widgets)
