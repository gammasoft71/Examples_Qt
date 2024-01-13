# PictureBox

Shows how to create a picture box with QLabel.

## Sources

[src/PictureBox.h](src/PictureBox.h)

[src/PictureBox.cpp](src/PictureBox.cpp)

[Resources/Logo.png](Resources/Logo.png)

[PictureBox.qrc](PictureBox.qrc)

[CMakeLists.txt](CMakeLists.txt)

## Output

![Screenshot](../../../docs/Pictures/PictureBox.png)

## Generate and build

### Qt Creator

To build these projects, open `PictureBox.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./PictureBox.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./PictureBox.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./PictureBox.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./PictureBox
```
