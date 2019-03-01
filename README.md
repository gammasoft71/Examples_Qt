
# Qt Examples

Shows how to use Qt widgets only by programming code (c++17).

## Hello World

["Hello World"](Qt.Widgets/HelloWorld) The classic first application HelloWorld with QLabel.

## Application and messages

[Application](src/Application) Shows how to create an Application with QApplication.

## Common Controls

[Button](src/Button) Shows how to create a Button and Event Click with QButton.

[CheckBox](src/CheckBox) Shows how to create a CheckBox with QCheckBox.

[Label](src/Label) Shows how to create a Label with QLabel.

[ProgressBar](src/ProgressBar) Shows how to create a ProgressBar with QProgress.

[RadioButton](src/RadioButton) Shows how to create a RadioButton with QRadioButton.

[TextBox](src/TextBox) Shows how to create a TextBox with QLineEdit.

[TrackBar](src/TrackBar) Shows how to create a TrackBar with QSlider.

## Containers

[Form](src/Form) Shows how to create a Form with QWindow.

[GroupBox](src/GroupBox) Shows how to create a GroupBox with QGroupBox.

[Panel](src/Panel) Shows how to create a Panel with QFrame.

[TabControl](src/TabControl) Shows how to create a TabControl with TabPages with QTabWidget.

## Menus and toolbars

[MainMenu](src/MainMenu) Shows how to create a MainMenu with QMenu and QAction.

## Components

[Timer](src/Timer) Shows how to create a Timer with QTimer.

## Dialogs

[ColorDialog](src/ColorDialog) Shows how to create a ColorDialog with QColorDalog.

[FolderBrowserDialog](src/FolderBrowserDialog) Shows how to create a FolderBrowserDialog with QFileDialog.

[FontDialog](src/FontDialog) Shows how to create a FontDialog with Qfontdialog.

[OpenFileDialog](src/OpenFileDialog) Shows how to create an OpenFileDialog with QFileDialog.

[MessageBox](src/MessageBox) Shows how to create a MessageBox with QMessageBox.

[SaveFileDialog](src/SaveFileDialog) Shows how to create an SaveFileDialog with QFileDialog.

## Download

``` shell
git clone https://github.com/gammasoft71/QtExamples QtExamples

```

## Generate and build

### Qt Creator

To build these projects, open each project.pro file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set "CMAKE_PREFIX_PATH" with Qt5 install path.

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./CocoaExamples.xcodeproj
```


#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
```


## Remarks

This project run with [Qt](https://www.qt.io) (and [CMake](https://cmake.org)).
