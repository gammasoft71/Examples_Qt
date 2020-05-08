cmake_minimum_required(VERSION 3.1)

# Project
project(PushButton)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(PushButton WIN32 MACOSX_BUNDLE src/PushButton.cpp)
target_link_libraries(PushButton Qt5::Widgets)
