# StringUnicode2

Shows how to use QTextStream and QString with unicode.

## Sources

[src/StringUnicode2.cpp](src/StringUnicode2.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
日 本 語 の ひ ら が な ,   漢 字 と カ タ カ ナ � � ! 
\u65e5\u672c\u8a9e\u306e\u3072\u3089\u304c\u306a\u002c\u0020\u6f22\u5b57\u3068\u30ab\u30bf\u30ab\u30ca\ud83d\udc28\u0021
```

## Generate and build

### Qt Creator

To build these projects, open `StringUnicode2.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./StringUnicode2.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./StringUnicode2.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./StringUnicode2.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./StringUnicode2
```
