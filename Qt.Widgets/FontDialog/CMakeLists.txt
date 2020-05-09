cmake_minimum_required(VERSION 3.1)

# Project
project(FontDialog)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(FontDialog WIN32 MACOSX_BUNDLE src/FontDialog.cpp)
target_link_libraries(FontDialog Qt5::Widgets)
