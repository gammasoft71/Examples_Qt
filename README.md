
# Qt Examples

shows how to use Qt widgets only by programming code (c++17).

[![qt](docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [Qt.Core](Qt.Core/README.md)

* [HelloWorlds](Qt.Core/HelloWorlds/README.md)
* [Collections](Qt.Core/Collections/README.md)
* [Console](Qt.Core/Console/README.md)
* [Strings](Qt.Core/Strings/README.md)

## [Qt.Widgets](Qt.Widgets/README.md)

* [HelloWorlds](Qt.Widgets/HelloWorlds/README.md)
* [Applications](Qt.Widgets/Applications/README.md)
* [Dialogs](Qt.Widgets/Dialogs/README.md)
* [Windows](Qt.Widgets/Windows/README.md)
* [MenusAndToolbars](Qt.Widgets/MenusAndToolbars/README.md)
* [Containers](Qt.Widgets/Containers/README.md)
* [Controls](Qt.Widgets/Controls/README.md)
* [Components](Qt.Widgets/Components/README.md)
* [UserControls](Qt.Widgets/UserControls/README.md)
* [Others](Qt.Widgets/Others/README.md)

## [Qt.Quick](Qt.Quick/README.md)

## [Qt.UnitTests](Qt.UnitTests/README.md)

## Download

``` shell
git clone https://github.com/gammasoft71/Examples_Qt
```

## Generate and build

### Qt Creator

To build these projects, open `Qt.Exmples.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.Exmples.sln
```

Select any project and type Ctrl+F5 to build and run it.

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Exmples.xcodeproj
```

Select any project and type Cmd+R to build and run it.

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.Exmples.cbp > /dev/null 2>&1
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

## Remarks

This project run with [Qt](https://www.qt.io) (and [CMake](https://cmake.org)).
