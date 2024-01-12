# HelloWorldEmoticons

The classic first application "Hello, world!" with QLabel and emoticons.

## Sources

[src/HelloWorldEmoticons.h](src/HelloWorldEmoticons.h)

[src/HelloWorldEmoticons.cpp](src/HelloWorldEmoticons.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/HelloWorldEmoticons.png)

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldEmoticons.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldEmoticons.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldEmoticons.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldEmoticons.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldEmoticons
```
