# Strings

Contains string examples.

* [StringSplit](StringSplit/README.md) shows how to use QString::split method.
* [StringUnicode](StringUnicode/README.md) shows how to use QTextStream and QString with unicode.
* [StringUnicode2](StringUnicode2/README.md) shows how to use QTextStream and QString with unicode.

## Generate and build

### Qt Creator

To build these projects, open `Strings.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Strings.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Strings.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Strings.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
