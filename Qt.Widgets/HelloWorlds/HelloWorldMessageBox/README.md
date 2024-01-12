# HelloWorldMessageBox

The classic first application "Hello, world!" with QMessageBox.

## Sources

[src/HelloWorldMessageBox.h](src/HelloWorldMessageBox.h)

[src/HelloWorldMessageBox.cpp](src/HelloWorldMessageBox.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/HelloWorldMessageBox.png)

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldMessageBox.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldMessageBox.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldMessageBox.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldMessageBox.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldMessageBox
```
