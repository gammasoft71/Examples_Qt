cmake_minimum_required(VERSION 3.20)

project(Qt.Examples)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(Qt.Core)
add_subdirectory(Qt.Widgets)
#add_subdirectory(Qt.Quick)
add_subdirectory(Qt.Test)
