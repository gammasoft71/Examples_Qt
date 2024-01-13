# CheckedListWidget

Shows how to create a checked list widget with QListWidget.

## Sources

[src/CheckedListWidget.h](src/CheckedListWidget.h)

[src/CheckedListWidget.cpp](src/CheckedListWidget.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/CheckedListWidget.png)

## Generate and build

### Qt Creator

To build these projects, open `CheckedListWidget.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./CheckedListWidget.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./CheckedListWidget.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./CheckedListWidget.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./CheckedListWidget
```
