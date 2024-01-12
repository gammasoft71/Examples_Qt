# StringUnicode

Shows how to use QTextStream and QString with unicode.

## Sources

[src/StringUnicode.cpp](src/StringUnicode.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Arabic:         الكلمة العربية
Trad. Chinese:  中國的漢字
Simpl. Chinese: 汉语
French:         Langue française
Greek:          Ελληνική γλώσσα
Hebrew:         כתב עברית
Hindi:          हिन्दी भाषा
Icelandic:      Íslenska
Japanese:       日本語のひらがな, 漢字とカタカナ
Korean:         대한민국의 한글
Russian:        Русский язык
```

## Generate and build

### Qt Creator

To build these projects, open `StringUnicode.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./StringUnicode.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./StringUnicode.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./StringUnicode.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./StringUnicode
```
