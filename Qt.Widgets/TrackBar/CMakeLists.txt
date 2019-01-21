cmake_minimum_required(VERSION 3.1)

# Project
project(TrackBar)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TrackBar WIN32 MACOSX_BUNDLE src/TrackBar.cpp)
target_link_libraries(TrackBar Qt5::Widgets)
