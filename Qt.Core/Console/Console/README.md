# Console

Shows how to use QTextStream stream with stdin and stdout.

## Sources

[src/Console.cpp](src/Console.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Hello World!
Enter your name: James
Good day, James!
```

## Generate and build

### Qt Creator

To build these projects, open `Console.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

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
./Console
```
