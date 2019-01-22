cmake_minimum_required(VERSION 3.1)

# Project
project(ConsoleColor)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(ConsoleColor src/ConsoleColor.cpp)
target_link_libraries(ConsoleColor Qt5::Core)
