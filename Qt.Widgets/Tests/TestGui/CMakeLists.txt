cmake_minimum_required(VERSION 3.20)

# Project
project(TestGui)
find_package(Qt6Widgets CONFIG REQUIRED)
if (NOT Qt6_FOUND)
  find_package(Qt5Widgets CONFIG REQUIRED)
endif()

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Application
add_executable(TestGui WIN32 MACOSX_BUNDLE src/TestGui.cpp)
target_link_libraries(TestGui Qt::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "Qt.Widgets/tests")
