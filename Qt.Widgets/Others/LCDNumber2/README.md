# LCDNumber2

Shows how to create a LCD number with QLCDNumber.

## Sources

[src/LCDNumber2.h](src/LCDNumber2.h)

[src/LCDNumber2.cpp](src/LCDNumber2.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/LCDNumber2.png)

## Generate and build

### Qt Creator

To build these projects, open `LCDNumber2.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./LCDNumber2.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./LCDNumber2.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./LCDNumber2.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./LCDNumber2
```
