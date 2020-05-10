cmake_minimum_required(VERSION 3.1)

# Project
project(FolderBrowserDialog)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(FolderBrowserDialog WIN32 MACOSX_BUNDLE src/FolderBrowserDialog.cpp)
target_link_libraries(FolderBrowserDialog Qt5::Widgets)
