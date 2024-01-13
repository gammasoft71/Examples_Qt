# Others

[This folder](.) contains others examples.

* [ButtonWithStyleSheets](ButtonWithStyleSheets/README.md) show how to use stylesheet with QPushButton.
* [InputDialogMultiline](InputDialogMultiline/README.md) show how to use multiline input dialog with QInputDialog.
* [InputDialogPassword](InputDialogPassword/README.md) show how to use password input dialog with QInputDialog.
* [LCDNumber2](LCDNumber2/README.md) shows how to create a LCD number with QLCDNumber.
* [Wiggly](Wiggly/README.md) shows how to animate a user control using QBasicTimer and timerEvent(). In addition, the example demonstrates how to use QFontMetrics to determine the size of text on screen.

## Generate and build

### Qt Creator

To build these projects, open `Others.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Others.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Others.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Others.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
