# TestWidgets

Is use to test Widgets.

## Sources

[src/TestWidgets.h](src/TestWidgets.h)

[src/TestWidgets.cpp](src/TestWidgets.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Generate and build

### Qt Creator

To build these projects, open `TestWidgets.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./TestWidgets.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./TestWidgets.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./TestWidgets.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./TestWidgets
```
