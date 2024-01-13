# DoubleSpinBox

Shows how to create a double spin box with QDoubleSpinBox.

## Sources

[src/DoubleSpinBox.h](src/DoubleSpinBox.h)

[src/DoubleSpinBox.cpp](src/DoubleSpinBox.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/DoubleSpinBox.png)

## Generate and build

### Qt Creator

To build these projects, open `DoubleSpinBox.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./DoubleSpinBox.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./DoubleSpinBox.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./DoubleSpinBox.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./DoubleSpinBox
```
