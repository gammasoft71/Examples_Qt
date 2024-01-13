# LCDNumber

Shows how to create a LCD number with QLCDNumber.

## Sources

[src/LCDNumber.h](src/LCDNumber.h)

[src/LCDNumber.cpp](src/LCDNumber.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/LCDNumber.png)

## Generate and build

### Qt Creator

To build these projects, open `LCDNumber.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./LCDNumber.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./LCDNumber.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./LCDNumber.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./LCDNumber
```
