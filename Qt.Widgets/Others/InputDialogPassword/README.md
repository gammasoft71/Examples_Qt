# InputDialogPassword

Show how to use password input dialog with QInputDialog.

## Sources

[src/InputDialogPassword.h](src/InputDialogPassword.h)

[src/InputDialogPassword.cpp](src/InputDialogPassword.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/InputDialogPassword.png)

## Generate and build

### Qt Creator

To build these projects, open `InputDialogPassword.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./InputDialogPassword.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./InputDialogPassword.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./InputDialogPassword.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./InputDialogPassword
```
