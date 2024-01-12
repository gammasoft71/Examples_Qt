# HelloWorldLabel

The classic first application "Hello, world!" with QLabel.

## Sources

[src/HelloWorldLabel.h](src/HelloWorldLabel.h)

[src/HelloWorldLabel.cpp](src/HelloWorldLabel.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/HelloWorldLabel.png)

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldLabel.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldLabel.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldLabel.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldLabel.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldLabel
```
