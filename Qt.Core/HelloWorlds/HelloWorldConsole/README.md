# HelloWorldConsole

The classic first application "Hello, World!" with QTextStream stream.

## Sources

[src/HelloWorldConsole.cpp](src/HelloWorldConsole.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Hello, World!
```

## Generate and build

### Qt Creator

To build these projects, open `HelloWorldConsole.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorldConsole.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorldConsole.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorldConsole.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./HelloWorldConsole
```
