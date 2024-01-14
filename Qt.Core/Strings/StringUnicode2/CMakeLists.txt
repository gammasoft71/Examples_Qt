cmake_minimum_required(VERSION 3.20)

project(StringUnicode2)

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

add_executable(${PROJECT_NAME} src/StringUnicode2.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/Strings")
