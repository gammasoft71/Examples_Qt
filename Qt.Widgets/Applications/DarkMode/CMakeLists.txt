cmake_minimum_required(VERSION 3.1)

# Project
project(DarkMode)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(DarkMode WIN32 MACOSX_BUNDLE src/DarkMode.cpp src/DarkMode.h)
target_link_libraries(DarkMode Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Applications")
