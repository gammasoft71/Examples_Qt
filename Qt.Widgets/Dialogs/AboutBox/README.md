# AboutBox

Shows how to create an about box with QMessageBox.

## Sources

[src/AboutBox.h](src/AboutBox.h)

[src/AboutBox.cpp](src/AboutBox.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/AboutBox.png)

## Generate and build

### Qt Creator

To build these projects, open `AboutBox.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./AboutBox.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./AboutBox.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./AboutBox.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AboutBox
```
