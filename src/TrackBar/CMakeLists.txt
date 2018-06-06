cmake_minimum_required(VERSION 3.2)

project(TrackBar VERSION 1.0.0)

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

add_executable(TrackBar ${GUI_OPTION} TrackBar.cpp)
target_link_libraries(TrackBar Qt5::Widgets)