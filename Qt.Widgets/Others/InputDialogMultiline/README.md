# InputDialogMultiline

Show how to use multiline input dialog with QInputDialog.

## Sources

[src/InputDialogMultiline.h](src/InputDialogMultiline.h)

[src/InputDialogMultiline.cpp](src/InputDialogMultiline.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/InputDialogMultiline.png)

## Generate and build

### Qt Creator

To build these projects, open `InputDialogMultiline.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./InputDialogMultiline.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./InputDialogMultiline.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./InputDialogMultiline.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./InputDialogMultiline
```
