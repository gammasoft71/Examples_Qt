cmake_minimum_required(VERSION 3.1)

# Project
project(PictureBox2)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

# Application
add_executable(PictureBox2 WIN32 MACOSX_BUNDLE src/PictureBox2.cpp PictureBox2.qrc)
target_link_libraries(PictureBox2 Qt5::Widgets)
