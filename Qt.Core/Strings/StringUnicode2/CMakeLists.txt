cmake_minimum_required(VERSION 3.20)

project(StringUnicode2)
find_package(Qt5Widgets CONFIG REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} src/StringUnicode2.cpp)
target_link_libraries(${PROJECT_NAME} Qt5::Core)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Core/Strings")
