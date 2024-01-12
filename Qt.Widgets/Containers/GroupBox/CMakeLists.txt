cmake_minimum_required(VERSION 3.20)

# Project
project(GroupBox)
find_package(Qt6Widgets CONFIG REQUIRED)
if (NOT Qt6_FOUND)
  find_package(Qt5Widgets CONFIG REQUIRED)
endif()

# Options
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE src/GroupBox.cpp src/GroupBox.h)
target_link_libraries(${PROJECT_NAME} Qt::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Widgets/Containers")
