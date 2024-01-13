# FolderBrowserDialog

Shows how to create a folder browser dialog with QFileDialog.

## Sources

[src/FolderBrowserDialog.h](src/FolderBrowserDialog.h)

[src/FolderBrowserDialog.cpp](src/FolderBrowserDialog.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/FolderBrowserDialog.png)

## Generate and build

### Qt Creator

To build these projects, open `FolderBrowserDialog.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./FolderBrowserDialog.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./FolderBrowserDialog.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./FolderBrowserDialog.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./FolderBrowserDialog
```
