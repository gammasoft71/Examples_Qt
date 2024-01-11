cmake_minimum_required(VERSION 3.20)

# Project
project(PushButton)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE src/PushButton.cpp src/PushButton.h)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Widgets/Controls")
