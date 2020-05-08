cmake_minimum_required(VERSION 3.1)

# Project
project(LCDNumber)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(LCDNumber WIN32 MACOSX_BUNDLE src/LCDNumber.cpp)
target_link_libraries(LCDNumber Qt5::Widgets)
