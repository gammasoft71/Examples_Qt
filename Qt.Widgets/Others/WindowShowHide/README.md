# WindowShowHide

Demonstrates the use of QMainWindow show, hide and close methods.

## Sources

[src/WindowShowHide.h](src/WindowShowHide.h)

[src/WindowShowHide.cpp](src/WindowShowHide.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/WindowShowHide.png)

## Generate and build

### Qt Creator

To build these projects, open `WindowShowHide.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./WindowShowHide.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./WindowShowHide.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./WindowShowHide.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./WindowShowHide
```
