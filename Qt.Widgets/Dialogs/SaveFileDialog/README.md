# SaveFileDialog

Shows how to create an save file dialog with QFileDialog.

## Sources

[src/SaveFileDialog.h](src/SaveFileDialog.h)

[src/SaveFileDialog.cpp](src/SaveFileDialog.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/SaveFileDialog.png)

## Generate and build

### Qt Creator

To build these projects, open `SaveFileDialog.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./SaveFileDialog.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./SaveFileDialog.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./SaveFileDialog.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./SaveFileDialog
```
