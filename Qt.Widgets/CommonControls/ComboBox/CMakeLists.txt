cmake_minimum_required(VERSION 3.1)

# Project
project(ComboBox)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(ComboBox WIN32 MACOSX_BUNDLE src/ComboBox.cpp)
target_link_libraries(ComboBox Qt5::Widgets)
