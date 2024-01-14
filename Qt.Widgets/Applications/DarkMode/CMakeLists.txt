cmake_minimum_required(VERSION 3.20)

project(DarkMode)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)
if (Qt6_FOUND)
  qt_standard_project_setup()
else ()
  find_package(Qt5 REQUIRED COMPONENTS Core Widgets)
  set(CMAKE_AUTOMOC ON)
  set(CMAKE_AUTORCC ON)
  set(CMAKE_AUTOUIC ON)
endif ()

add_executable(DarkMode WIN32 MACOSX_BUNDLE src/DarkMode.cpp src/DarkMode.h)
target_link_libraries(DarkMode Qt::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Widgets/Applications")
