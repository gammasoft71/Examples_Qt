# Qt.UnitTest

Shows how to use Qt unit tests only by programming code (c++17).

[![qt](../docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [HelloWorldsUnitTest](HelloWorldsUnitTest/README.md)

* [HelloWorldUnitTest](HelloWorldsUnitTest/HelloWorldUnitTest/README.md) The classic first application "Hello, World!".

## Generate and build

### Qt Creator

To build these projects, open `Qt.UnitTest.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.UnitTest.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.UnitTest.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.UnitTest.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
