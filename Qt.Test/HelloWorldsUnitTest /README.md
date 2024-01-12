# HelloWorldsUnitTest

[This folder](.) contains Qt.Test "Hello, world!" examples.

* [HelloWorldUnitTest](HelloWorldUnitTest/README.md) The classic first application "Hello, World!".

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldsUnitTest.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldsUnitTest.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldsUnitTest.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldsUnitTest.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
