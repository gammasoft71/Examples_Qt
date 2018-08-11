cmake_minimum_required(VERSION 3.2)

project(TrackBar VERSION 1.0.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

if(MSVC)
  set(GUI_OPTION WIN32)
elseif (APPLE)
  set(GUI_OPTION MACOSX_BUNDLE)
elseif(UNIX)
  set(GUI_OPTION )
endif ()

find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TrackBar ${GUI_OPTION} TrackBar.cpp)
target_link_libraries(TrackBar Qt5::Widgets)
