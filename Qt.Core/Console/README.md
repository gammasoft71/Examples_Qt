# Console

shows how to use xtd::console::in and xtd::console::out streams.

## Source

[Console.cpp](src/Console.cpp)

[CMakeLists.txt](CMakeLists.txt)


## Generate and build

### Qt Creator

To build these projects, open each project.pro file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set "CMAKE_PREFIX_PATH" with Qt5 install path.

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

## Output

```
Hello World!
Enter your name: James
Good day, James!
```


