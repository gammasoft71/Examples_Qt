
# Qt Examples

Shows how to use Qt widgets only by programming code (c++17).

## Hello World

["Hello World"](Qt.Widgets/HelloWorldForm) The classic first application HelloWorld with QLabel.

## Application and messages

[Application](Qt.Widgets/Application/Application) Shows how to create an application with QApplication.

[DarkMode](Qt.Widgets/Application/DarkMode) Shows how to create a dafrk mode application.

## Common Controls

[CheckBox](Qt.Widgets/CommonControls/CheckBox) Shows how to create a check box with QCheckBox.

[CheckedListWidget](Qt.Widgets/CommonControls/CheckedListWidget) Shows how to create a checked list widget with QListWidget.

[ComboBox](Qt.Widgets/CommonControls/ComboBox) Shows how to create a combo box with QComboBox.

[DoubleSpinBox](Qt.Widgets/CommonControls/DoubleSpinBox) Shows how to create a double spin box with QDoubleSpinBox.

[LCDNumber](Qt.Widgets/CommonControls/LCDNumber) Shows how to create a LCD number with QLCDNumber.

[Label](Qt.Widgets/CommonControls/Label) Shows how to create a label with QLabel.

[LineEdit](Qt.Widgets/CommonControls/LineEdit) Shows how to create a line edit with QLineEdit.

[PictureBox](Qt.Widgets/CommonControls/PictureBox) Shows how to create a picture box with QLabel.

[PictureBox2](Qt.Widgets/CommonControls/PictureBox2) Shows how to create a picture box with QGraphicsPixmapItem.

[ProgressBar](Qt.Widgets/CommonControls/ProgressBar) Shows how to create a ProgressBar with QProgress.

[PushButton](Qt.Widgets/CommonControls/PushButton) Shows how to create a button and Event Click with QPushButton.

[RadioButton](Qt.Widgets/CommonControls/RadioButton) Shows how to create a radio button with QRadioButton.

[Slider](Qt.Widgets/CommonControls/Slider) Shows how to create a slider with QSlider.

[SpinBox](Qt.Widgets/CommonControls/SpinBox) Shows how to create a spin box with QSpinBox.

[SpinButton](Qt.Widgets/CommonControls/SpinButton) Shows how to create a spin button with QSpinBox.

[ToggleButton](Qt.Widgets/CommonControls/ToggleButton) Shows how to create a toggle button with QPushButton.

[Widget](Qt.Widgets/CommonControls/ToggleButton) Shows how to create a widget with QWidget.

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

## Others

[LCDNumber2](Qt.Widgets/Others/LCDNumber2) Shows how to create a LCD number with QLCDNumber.

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
