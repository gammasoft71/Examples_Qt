cmake_minimum_required(VERSION 3.20)

# Project
project(ConsoleColor)
find_package(Qt6Widgets CONFIG REQUIRED)
if (NOT Qt6_FOUND)
  find_package(Qt5Widgets CONFIG REQUIRED)
endif()

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(ConsoleColor src/ConsoleColor.cpp)
target_link_libraries(ConsoleColor Qt::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/Console")
