# Console

Contains Qt console examples.

* [Console](Console/README.md) shows how to use QTextStream stream with stdin and stdout.
* [ConsoleColor](ConsoleColor/README.md) shows how to use QTextStream stream with stdout and ANSI colors.

## Generate and build

### Qt Creator

To build these projects, open `Console.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Console.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Console.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Console.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
