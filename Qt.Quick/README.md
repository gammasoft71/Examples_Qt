# Qt.Quick

shows how to use Qt Quick only by programming code (c++17).

[![qt](../docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [HelloWorldsQuick](HelloWorldsQuick/README.md)

* [HelloWorldQuick](HelloWorldsQuick/HelloWorldQuick/README.md) The classic first application "Hello, World!" with MessageDialog.
* [HelloWorldMessageBoxQuick](HelloWorldsQuick/HelloWorldMessageBoxQuick/README.md) The classic first application "Hello, World!" with Label.

## [ControlsQuick](ControlsQuick/README.md)

* [ButtonQuick](ControlsQuick/ButtonQuick/README.md) shows how to use Button.
* [CheckBoxQuick](ControlsQuick/CheckBoxQuick/README.md) shows how to use CheckBox.

## Generate and build

### Qt Creator

To build these projects, open `Qt.Quick.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.Quick.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Quick.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.Quick.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
