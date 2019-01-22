cmake_minimum_required(VERSION 3.1)

project(StringSplit)
find_package(Qt5Widgets CONFIG REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} src/StringSplit.cpp)
target_link_libraries((${PROJECT_NAME} Qt5::Core)
