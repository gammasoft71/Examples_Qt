cmake_minimum_required(VERSION 3.20)

# Project
project(TestConsole)
find_package(Qt6Core CONFIG REQUIRED)
if (NOT Qt6_FOUND)
  find_package(Qt5Core CONFIG REQUIRED)
endif()

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TestConsole src/main.cpp)
target_link_libraries(TestConsole Qt::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/tests")
