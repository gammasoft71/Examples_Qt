cmake_minimum_required(VERSION 3.1)

# Project
project(CheckedListWidget)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(CheckedListWidget WIN32 MACOSX_BUNDLE src/CheckedListWidget.cpp)
target_link_libraries(CheckedListWidget Qt5::Widgets)
