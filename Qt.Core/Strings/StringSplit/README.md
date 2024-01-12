# StringSplit

Shows how to use QString::split method.

## Sources

[src/StringSplit.cpp](src/StringSplit.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
strings.count() = 5
One
Two
Three
Four
Five
```

## Generate and build

### Qt Creator

To build these projects, open `StringSplit.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./StringSplit.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./StringSplit.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./StringSplit.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./StringSplit
```
