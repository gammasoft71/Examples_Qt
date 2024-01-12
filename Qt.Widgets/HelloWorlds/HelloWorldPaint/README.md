# HelloWorldPaint

The classic first application "Hello, world!" with QPainter.

## Sources

[src/HelloWorldPaint.h](src/HelloWorldPaint.h)

[src/HelloWorldPaint.cpp](src/HelloWorldPaint.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/HelloWorldPaint.png)

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldPaint.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldPaint.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldPaint.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldPaint.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldPaint
```
