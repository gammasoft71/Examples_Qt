cmake_minimum_required(VERSION 3.20)

# Project
project(TestGui)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TestGui WIN32 MACOSX_BUNDLE src/TestGui.cpp)
target_link_libraries(TestGui Qt5::Widgets)
