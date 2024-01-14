cmake_minimum_required(VERSION 3.20)

project(List)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
if (Qt6_FOUND)
  qt_standard_project_setup()
else ()
  find_package(Qt5 REQUIRED COMPONENTS Core)
endif ()

add_executable(${PROJECT_NAME} src/List.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/Collections")
