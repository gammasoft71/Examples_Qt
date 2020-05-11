
# Qt Examples

shows how to use Qt widgets only by programming code (c++17).

## Hello World

[HelloWorldEmoticons](Qt.Widgets/HelloWorld/HelloWorldEmoticons) The classic first application "Hello, world!" with QLabel and emoticons.

[HelloWorldLabel](Qt.Widgets/HelloWorld/HelloWorldLabel) The classic first application "Hello, world!" with QLabel.

[HelloWorldMessageBox](Qt.Widgets/HelloWorld/HelloWorldMessageBox) The classic first application "Hello, world!" with QMessageBox.

[HelloWorldPaint](Qt.Widgets/HelloWorld/HelloWorldPaint) The classic first application "Hello, world!" with QPainter.

## Application and messages

[Application](Qt.Widgets/Application/Application) shows how to create an application with QApplication.

[DarkMode](Qt.Widgets/Application/DarkMode) shows how to create a dark mode application.

## Common Controls

[CheckBox](Qt.Widgets/CommonControls/CheckBox) shows how to create a check box with QCheckBox.

[CheckedListWidget](Qt.Widgets/CommonControls/CheckedListWidget) shows how to create a checked list widget with QListWidget.

[ComboBox](Qt.Widgets/CommonControls/ComboBox) shows how to create a combo box with QComboBox.

[DoubleSpinBox](Qt.Widgets/CommonControls/DoubleSpinBox) shows how to create a double spin box with QDoubleSpinBox.

[LCDNumber](Qt.Widgets/CommonControls/LCDNumber) shows how to create a LCD number with QLCDNumber.

[Label](Qt.Widgets/CommonControls/Label) shows how to create a label with QLabel.

[LineEdit](Qt.Widgets/CommonControls/LineEdit) shows how to create a line edit with QLineEdit.

[PictureBox](Qt.Widgets/CommonControls/PictureBox) shows how to create a picture box with QLabel.

[PictureBox2](Qt.Widgets/CommonControls/PictureBox2) shows how to create a picture box with QGraphicsPixmapItem.

[ProgressBar](Qt.Widgets/CommonControls/ProgressBar) shows how to create a ProgressBar with QProgress.

[PushButton](Qt.Widgets/CommonControls/PushButton) shows how to create a button and Event Click with QPushButton.

[RadioButton](Qt.Widgets/CommonControls/RadioButton) shows how to create a radio button with QRadioButton.

[Slider](Qt.Widgets/CommonControls/Slider) shows how to create a slider with QSlider.

[SpinBox](Qt.Widgets/CommonControls/SpinBox) shows how to create a spin box with QSpinBox.

[SpinButton](Qt.Widgets/CommonControls/SpinButton) shows how to create a spin button with QSpinBox.

[ToggleButton](Qt.Widgets/CommonControls/ToggleButton) shows how to create a toggle button with QPushButton.

[Widget](Qt.Widgets/CommonControls/ToggleButton) shows how to create a widget with QWidget.

## Containers

[Frame](Qt.Widgets/Containers/Frame) shows how to create a frame with QFrame.

[GroupBox](Qt.Widgets/Containers/GroupBox) shows how to create a group box with QGroupBox.

[TabWidget](Qt.Widgets/Containers/TabWidget) shows how to create a tab widget with QTabWidget.

[Window](Qt.Widgets/Containers/Window) shows how to create a window with QMainWindow.

## Menus and toolbars

[MenuBar](Qt.Widgets/MenusAndToolbars/MenuBar) shows how to create a menu bar with QMenu and QAction.

[StatusBar](Qt.Widgets/MenusAndToolbars/StatusBar) shows how to create a status bar with QStatusBar.

## Components

[Cursors](Qt.Widgets/Components/Cursors) shows how to associate cursor to widget with QCursor.

[Timer](Qt.Widgets/Components/Timer) shows how to create a Timer with QTimer.

## Dialogs

[ColorDialog](Qt.Widgets/Dialogs/ColorDialog) shows how to create a ColorDialog with QColorDalog.

[FolderBrowserDialog](Qt.Widgets/Dialogs/FolderBrowserDialog) shows how to create a FolderBrowserDialog with QFileDialog.

[FontDialog](Qt.Widgets/Dialogs/FontDialog) shows how to create a FontDialog with QFontDialog.

[MessageBox](Qt.Widgets/Dialogs/MessageBox) shows how to create a MessageBox with QMessageBox.

[OpenFileDialog](Qt.Widgets/Dialogs/OpenFileDialog) shows how to create an OpenFileDialog with QFileDialog.

[SaveFileDialog](Qt.Widgets/Dialogs/SaveFileDialog) shows how to create an SaveFileDialog with QFileDialog.

## Others

[LCDNumber2](Qt.Widgets/Others/LCDNumber2) shows how to create a LCD number with QLCDNumber.

[Wiggly](Qt.Widgets/Others/Wiggly) shows how to animate a user control using QBasicTimer and timerEvent(). In addition, the example demonstrates how to use QFontMetrics to determine the size of text on screen.

## Download

``` shell
git clone https://github.com/gammasoft71/Examples_Qt.git

```

## Generate and build

### Qt Creator

To build these projects, open each project.pro file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set "CMAKE_PREFIX_PATH" with Qt5 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.Examples.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Examples.xcodeproj
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
