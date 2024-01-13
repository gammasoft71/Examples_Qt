# ComboBox

Shows how to create a combo box with QComboBox.

## Sources

[src/ComboBox.h](src/ComboBox.h)

[src/ComboBox.cpp](src/ComboBox.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/ComboBox.png)

## Generate and build

### Qt Creator

To build these projects, open `ComboBox.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./ComboBox.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./ComboBox.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ComboBox.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./ComboBox
```
