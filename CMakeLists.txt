cmake_minimum_required(VERSION 3.20)

# Solution
project(Qt.Examples)

# Options
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Projects
add_subdirectory(Qt.Core)
add_subdirectory(Qt.Widgets)
add_subdirectory(Qt.Tests)
