# Hello World

[This folder](.) contains Qt.Widgets "Hello, world!" examples.

* [HelloWorldEmoticons](HelloWorldEmoticons/README.md) The classic first application "Hello, world!" with QLabel and emoticons.
* [HelloWorldLabel](HelloWorldLabel/README.md) The classic first application "Hello, world!" with QLabel.
* [HelloWorldMessageBox](HelloWorldMessageBox/README.md) The classic first application "Hello, world!" with QMessageBox.
* [HelloWorldPaint](HelloWorldPaint/README.md) The classic first application "Hello, world!" with QPainter.

## Generate and build

### Qt Creator

To build these projects, open each `HelloWorlds.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./HelloWorlds.sln
```

Select any project and type Ctrl+F5 to build and run it.

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./HelloWorlds.xcodeproj
```

Select any project and type Cmd+R to build and run it.

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./HelloWorlds.cbp > /dev/null 2>&1
```

Select any project and type F10 to build and run it.

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
