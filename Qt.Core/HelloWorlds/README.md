# HelloWorlds

Contains Qt.Core "Hello, World!" examples.

* [HelloWorldConsole](HelloWorldConsole/README.md) The classic first application "Hello, world!" with QTextStream stream.

## Generate and build

### Qt Creator

To build these projects, open `HelloWorlds.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorlds.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorlds.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorlds.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
