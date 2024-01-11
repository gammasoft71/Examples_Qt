cmake_minimum_required(VERSION 3.20)

# Project
project(TestConsole)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TestConsole src/main.cpp)
target_link_libraries(TestConsole Qt5::Core Qt5::Widgets)
