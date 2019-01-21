cmake_minimum_required(VERSION 3.1)

# Project
project(Button)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(Button WIN32 MACOSX_BUNDLE src/Button.cpp)
target_link_libraries(Button Qt5::Widgets)
