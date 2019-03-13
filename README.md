
# Qt Examples

Shows how to use Qt widgets only by programming code (c++17).

## Hello World

["Hello World"](Qt.Widgets/HelloWorldForm) The classic first application HelloWorld with QLabel.

## Application and messages

[Application](Qt.Widgets/Application) Shows how to create an Application with QApplication.

## Common Controls

[Button](Qt.Widgets/Button) Shows how to create a Button and Event Click with QButton.

[CheckBox](Qt.Widgets/CheckBox) Shows how to create a CheckBox with QCheckBox.
Qt.Widgets
[Label](Qt.Widgets/Label) Shows how to create a Label with QLabel.

[ProgressBar](Qt.Widgets/ProgressBar) Shows how to create a ProgressBar with QProgress.

[RadioButton](Qt.Widgets/RadioButton) Shows how to create a RadioButton with QRadioButton.

[TextBox](Qt.Widgets/TextBox) Shows how to create a TextBox with QLineEdit.

[TrackBar](Qt.Widgets/TrackBar) Shows how to create a TrackBar with QSlider.

## Containers

[Form](Qt.Widgets/Form) Shows how to create a Form with QWindow.

[GroupBox](Qt.Widgets/GroupBox) Shows how to create a GroupBox with QGroupBox.

[Panel](Qt.Widgets/Panel) Shows how to create a Panel with QFrame.

[TabControl](Qt.Widgets/TabControl) Shows how to create a TabControl with TabPages with QTabWidget.

## Menus and toolbars

[MainMenu](Qt.Widgets/MainMenu) Shows how to create a MainMenu with QMenu and QAction.

## Components

[Timer](Qt.Widgets/Timer) Shows how to create a Timer with QTimer.

## Dialogs

[ColorDialog](Qt.Widgets/ColorDialog) Shows how to create a ColorDialog with QColorDalog.

[FolderBrowserDialog](Qt.Widgets/FolderBrowserDialog) Shows how to create a FolderBrowserDialog with QFileDialog.

[FontDialog](Qt.Widgets/FontDialog) Shows how to create a FontDialog with Qfontdialog.

[OpenFileDialog](Qt.Widgets/OpenFileDialog) Shows how to create an OpenFileDialog with QFileDialog.

[MessageBox](Qt.Widgets/MessageBox) Shows how to create a MessageBox with QMessageBox.

[SaveFileDialog](Qt.Widgets/SaveFileDialog) Shows how to create an SaveFileDialog with QFileDialog.

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
