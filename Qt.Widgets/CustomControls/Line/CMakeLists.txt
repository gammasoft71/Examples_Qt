cmake_minimum_required(VERSION 3.1)

# Project
project(Line)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(Line WIN32 MACOSX_BUNDLE src/Line.cpp src/Line.h)
target_link_libraries(Line Qt5::Widgets)
