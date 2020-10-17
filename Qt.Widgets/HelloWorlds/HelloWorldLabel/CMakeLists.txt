cmake_minimum_required(VERSION 3.1)

# Project
project(HelloWorldLabel)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(HelloWorldLabel WIN32 MACOSX_BUNDLE src/HelloWorldLabel.cpp src/HelloWorldLabel.h)
target_link_libraries(HelloWorldLabel Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "HelloWorlds")
