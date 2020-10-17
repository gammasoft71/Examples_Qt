cmake_minimum_required(VERSION 3.1)

# Project
project(ToggleButton)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(ToggleButton WIN32 MACOSX_BUNDLE src/ToggleButton.cpp src/ToggleButton.h)
target_link_libraries(ToggleButton Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "CommonControls")
