# Qt.Core

shows how to use Qt widgets only by programming code (c++17).

[![qt](../docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [HelloWorlds](HelloWorlds/README.md)

* [HelloWorldConsole](HelloWorlds/HelloWorldConsole) The classic first application "Hello, World!" with QTextStream stream.

## [Console](Console/README.md)

* [Console](Console/Console) shows how to use QTextStream stream with stdin and stdout.
* [ConsoleColor](Console/ConsoleColor) shows how to use QTextStream stream with stdout and ANSI colors.

## Generate and build

### Qt Creator

To build these projects, open `Qt.Core.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.Core.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Core.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.Core.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
