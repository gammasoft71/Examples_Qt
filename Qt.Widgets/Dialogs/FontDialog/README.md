# FontDialog

Shows how to create a font dialog with QFontDialog.

## Sources

[src/FontDialog.h](src/FontDialog.h)

[src/FontDialog.cpp](src/FontDialog.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/FontDialog.png)

## Generate and build

### Qt Creator

To build these projects, open `FontDialog.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./FontDialog.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./FontDialog.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./FontDialog.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./FontDialog
```
