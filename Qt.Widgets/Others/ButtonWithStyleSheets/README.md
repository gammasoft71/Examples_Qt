# ButtonWithStyleSheets

Show how to use stylesheet with QPushButton.

## Sources

[src/ButtonWithStyleSheets.h](src/ButtonWithStyleSheets.h)

[src/ButtonWithStyleSheets.cpp](src/ButtonWithStyleSheets.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/ButtonWithStyleSheets.png)

## Generate and build

### Qt Creator

To build these projects, open `ButtonWithStyleSheets.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./ButtonWithStyleSheets.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./ButtonWithStyleSheets.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ButtonWithStyleSheets.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./ButtonWithStyleSheets
```
