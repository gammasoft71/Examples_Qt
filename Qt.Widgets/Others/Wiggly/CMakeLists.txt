cmake_minimum_required(VERSION 3.1)

# Project
project(Wiggly)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(Wiggly WIN32 MACOSX_BUNDLE src/Wiggly.cpp src/Wiggly.h)
target_link_libraries(Wiggly Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Others")
