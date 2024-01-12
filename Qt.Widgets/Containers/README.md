# Containers]

[This folder](.) contains containers examples.

* [Frame](Frame/README.md) shows how to create a frame with QFrame.
* [GroupBox](GroupBox/README.md) shows how to create a group box with QGroupBox.
* [TabWidget](TabWidget/README.md) shows how to create a tab widget with QTabWidget.

## Generate and build

### Qt Creator

To build these projects, open `Containers.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Containers.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Containers.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Containers.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
