# [HelloWorldsQuick

[This folder](.) contains Qt.Quick "Hello, world!" examples.

* [HelloWorldQuick](HelloWorldQuick/README.md) The classic first application "Hello, World!" with MessageDialog.
* [HelloWorldMessageBoxQuick](HelloWorldMessageBoxQuick/README.md) The classic first application "Hello, World!" with Label.

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldsQuick.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldsQuick.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldsQuick.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldsQuick.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
