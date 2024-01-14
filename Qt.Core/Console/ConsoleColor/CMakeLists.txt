cmake_minimum_required(VERSION 3.20)

project(ConsoleColor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
if (Qt6_FOUND)
  qt_standard_project_setup()
else ()
  find_package(Qt5 REQUIRED COMPONENTS Core)
  set(CMAKE_AUTOMOC ON)
  set(CMAKE_AUTORCC ON)
  set(CMAKE_AUTOUIC ON)
endif ()

add_executable(ConsoleColor src/ConsoleColor.cpp)
target_link_libraries(ConsoleColor Qt::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/Console")
