# ButtonWithStyleSheet

Show how to use stylesheet with QPushButton.

## Sources

[src/ButtonWithStyleSheet.h](src/ButtonWithStyleSheet.h)

[src/ButtonWithStyleSheet.cpp](src/ButtonWithStyleSheet.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/ButtonWithStyleSheet.png)

## Generate and build

### Qt Creator

To build these projects, open `ButtonWithStyleSheet.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./ButtonWithStyleSheet.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./ButtonWithStyleSheet.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ButtonWithStyleSheet.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./ButtonWithStyleSheet
```
