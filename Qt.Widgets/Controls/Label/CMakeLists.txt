cmake_minimum_required(VERSION 3.20)

project(Label)

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

add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE src/Label.cpp src/Label.h)
target_link_libraries(${PROJECT_NAME} Qt::Core Qt::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Widgets/Controls")
