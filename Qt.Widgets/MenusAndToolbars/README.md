# Menus and toolbars

[This folder](.) contains menus and toolbars examples.

* [MenuBar](MenuBar/README.md) shows how to create a menu bar with QMenu and QAction.
* [StatusBar](StatusBar/README.md) shows how to create a status bar with QStatusBar.
* [ToolBar](ToolBar/README.md) shows how to create a toolbar bar with QToolsBar.

## Generate and build

### Qt Creator

To build these projects, open `MenusAndToolbars.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./MenusAndToolbars.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./MenusAndToolbars.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./MenusAndToolbars.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
