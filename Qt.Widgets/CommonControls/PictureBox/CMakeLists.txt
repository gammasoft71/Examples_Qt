cmake_minimum_required(VERSION 3.1)

# Project
project(PictureBox)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

# Application
add_executable(PictureBox WIN32 MACOSX_BUNDLE src/PictureBox.cpp src/PictureBox.h PictureBox.qrc)
target_link_libraries(PictureBox Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "CommonControls")
