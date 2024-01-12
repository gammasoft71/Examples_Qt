# Dialogs

[This folder](.) contains dialogs examples.

* [ColorDialog](ColorDialog/README.md) shows how to create a ColorDialog with QColorDalog.
* [FolderBrowserDialog](FolderBrowserDialog/README.md) shows how to create a FolderBrowserDialog with QFileDialog.
* [FontDialog](FontDialog/README.md) shows how to create a FontDialog with QFontDialog.
* [MessageBox](MessageBox/README.md) shows how to create a MessageBox with QMessageBox.
* [OpenFileDialog](OpenFileDialog/README.md) shows how to create an OpenFileDialog with QFileDialog.
* [SaveFileDialog](SaveFileDialog/README.md) shows how to create an SaveFileDialog with QFileDialog.

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
