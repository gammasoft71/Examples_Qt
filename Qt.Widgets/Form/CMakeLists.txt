cmake_minimum_required(VERSION 3.1)

# Project
project(Form)
find_package(Qt5Widgets CONFIG REQUIRED)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(Form WIN32 MACOSX_BUNDLE src/Form.cpp)
target_link_libraries(Form Qt5::Widgets)
