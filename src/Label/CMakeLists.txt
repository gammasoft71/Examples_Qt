cmake_minimum_required(VERSION 3.2)

project(Label VERSION 1.0.0)

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

add_executable(Label ${GUI_OPTION} Label.cpp)
target_link_libraries(Label Qt5::Widgets)