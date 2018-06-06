cmake_minimum_required(VERSION 3.2)

project(SaveFileDialog VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
  set(GUI_OPTION WIN32)
elseif (APPLE)
  set(GUI_OPTION MACOSX_BUNDLE)
elseif(UNIX)
  set(GUI_OPTION )
endif ()

find_package(Qt5Widgets)

add_executable(SaveFileDialog ${GUI_OPTION} SaveFileDialog.cpp)
target_link_libraries(SaveFileDialog Qt5::Widgets)