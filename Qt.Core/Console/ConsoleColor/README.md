# ConsoleColor

Shows how to use QTextStream stream with stdout and ANSI colors.

## Source

[src/ConsoleColor.cpp](src/ConsoleColor.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
       ████████████████████████████████████████████████████████████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
     ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
     ███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████
     ██████████████████████████████████████████████████████████████████████
     ██████████████████████████████████████████████████████████████████████
     ██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████
     ███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████
     ██████████████████████████      ▀████       ▀█████████████████████████
     ███████████             ▐         ▀▀         ▐              ██████████
     █████████               ▐   ███   ▌▐   ███   ▐               █████████
     █████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████
     █████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████
     █████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████
     █████████                                                    █████████
     █████████                 █▄                ▌                █████████
     █████████                  ▌▀▀▄          ▄██                 █████████
     █████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████
     █████████                   ▐            ▄█                  █████████
     █████████                    █          ▄█                   █████████
     █████████                     ▀▄       █▀                    █████████
     █████████                       ▀▄▄▄▄██▀                     █████████
     █████████                                                    █████████
     █████████                                                    █████████
     █████████                                                    █████████
     █████████                                                    █████████
     █████████                                                    █████████
       ██████████████████████████████████████████████████████████████████
                                     Gammasoft
More than thirty years of passion for high technology especially in development
(c++, c#, objective-c, ...).
```

## Generate and build

### Qt Creator

To build these projects, open `ConsoleColor.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./ConsoleColor.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./ConsoleColor.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./ConsoleColor.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./ConsoleColor
```
