cmake_minimum_required(VERSION 3.20)

project(HelloWorldUnitTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Test)
if (Qt6_FOUND)
  qt_standard_project_setup()
else ()
  find_package(Qt5 REQUIRED COMPONENTS Core Test)
  set(CMAKE_AUTOMOC ON)
  set(CMAKE_AUTORCC ON)
  set(CMAKE_AUTOUIC ON)
endif ()

add_executable(${PROJECT_NAME} src/HelloWorldUnitTest.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core Qt::Test)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Test/HelloWorldsUnitTest")
