# ControlsQuick

[This folder](.) contains controls examples.

* [ButtonQuick](ButtonQuick/README.md) shows how to use Button.
* [CheckBoxQuick](CheckBoxQuick/README.md) shows how to use CheckBox.

## Generate and build

### Qt Creator

To build these projects, open `ControlsQuick.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./ControlsQuick.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./ControlsQuick.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ControlsQuick.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
