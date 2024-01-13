# Dialogs

[This folder](.) contains dialogs examples.

* [AboutBox](AboutBox/README.md) shows how to create an about box with QMessageBox.
* [ColorDialog](ColorDialog/README.md) shows how to create a colord dialog with QColorDalog.
* [FolderBrowserDialog](FolderBrowserDialog/README.md) shows how to create a folder browser dialog with QFileDialog.
* [FontDialog](FontDialog/README.md) shows how to create a font dialog with QFontDialog.
* [MessageBox](MessageBox/README.md) shows how to create a message box with QMessageBox.
* [OpenFileDialog](OpenFileDialog/README.md) shows how to create an open file dialog with QFileDialog.
* [SaveFileDialog](SaveFileDialog/README.md) shows how to create an save file dialog with QFileDialog.

## Generate and build

### Qt Creator

To build these projects, open `Dialogs.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Dialogs.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Dialogs.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Dialogs.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
