# Qt Examples

shows how to use Qt widgets only by programming code (c++17).

[![qt](../docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## Hello World

* [HelloWorldEmoticons](HelloWorlds/HelloWorldEmoticons) The classic first application "Hello, world!" with QLabel and emoticons.
* [HelloWorldLabel](HelloWorlds/HelloWorldLabel) The classic first application "Hello, world!" with QLabel.
* [HelloWorldMessageBox](HelloWorlds/HelloWorldMessageBox) The classic first application "Hello, world!" with QMessageBox.
* [HelloWorldPaint](HelloWorlds/HelloWorldPaint) The classic first application "Hello, world!" with QPainter.

## Application and messages

* [Application](Applications/Application) shows how to create an application with QApplication.
* [DarkMode](Applications/DarkMode) shows how to create a dark mode application.

## Controls

* [CheckBox](Controls/CheckBox) shows how to create a check box with QCheckBox.
* [CheckedListWidget](Controls/CheckedListWidget) shows how to create a checked list widget with QListWidget.
* [ComboBox](Controls/ComboBox) shows how to create a combo box with QComboBox.
* [Dial](Controls/Dial) shows how to create a dial with QDial.
* [DoubleSpinBox](Controls/DoubleSpinBox) shows how to create a double spin box with QDoubleSpinBox.
* [LCDNumber](Controls/LCDNumber) shows how to create a LCD number with QLCDNumber.
* [Label](Controls/Label) shows how to create a label with QLabel.
* [LineEdit](Controls/LineEdit) shows how to create a line edit with QLineEdit.
* [ListView](Controls/ListWidget) shows how to create a list view with QListView.
* [ListView2](Controls/ListView2) shows how to create a list view with QTreeView.
* [ListWidget](Controls/ListWidget) shows how to create a list widget with QListWidget.
* [PictureBox](Controls/PictureBox) shows how to create a picture box with QLabel.
* [PictureBox2](Controls/PictureBox2) shows how to create a picture box with QGraphicsPixmapItem.
* [ProgressBar](Controls/ProgressBar) shows how to create a ProgressBar with QProgress.
* [PushButton](Controls/PushButton) shows how to create a button and Event Click with QPushButton.
* [RadioButton](Controls/RadioButton) shows how to create a radio button with QRadioButton.
* [Slider](Controls/Slider) shows how to create a slider with QSlider.
* [SpinBox](Controls/SpinBox) shows how to create a spin box with QSpinBox.
* [SpinButton](Controls/SpinButton) shows how to create a spin button with QSpinBox.
* [ToggleButton](Controls/ToggleButton) shows how to create a toggle button with QPushButton.
* [TreeView](Controls/TreeView) shows how to create a three view with QTreeView.
* [TreeWidget](Controls/TreeWidget) shows how to create a three widget with QTreeWidget.
* [Widget](Controls/ToggleButton) shows how to create a widget with QWidget.

## Custom Controls

* [Line](CustomControls/Line) shows how to create a custom widget line with QFrame.

## Containers

* [Frame](Containers/Frame) shows how to create a frame with QFrame.
* [GroupBox](Containers/GroupBox) shows how to create a group box with QGroupBox.
* [TabWidget](Containers/TabWidget) shows how to create a tab widget with QTabWidget.
* [Window](Containers/Window) shows how to create a window with QMainWindow.

## Menus and toolbars

* [MenuBar](MenusAndToolbars/MenuBar) shows how to create a menu bar with QMenu and QAction.
* [StatusBar](MenusAndToolbars/StatusBar) shows how to create a status bar with QStatusBar.
* [ToolBar](MenusAndToolbars/ToolBar) shows how to create a toolbar bar with QToolsBar.

## Components

* [Cursors](Components/Cursors) shows how to associate cursor to widget with QCursor.
* [Timer](Components/Timer) shows how to create a Timer with QTimer.

## Dialogs

* [ColorDialog](Dialogs/ColorDialog) shows how to create a ColorDialog with QColorDalog.
* [FolderBrowserDialog](FolderBrowserDialog) shows how to create a FolderBrowserDialog with QFileDialog.
* [FontDialog](Dialogs/FontDialog) shows how to create a FontDialog with QFontDialog.
* [MessageBox](Dialogs/MessageBox) shows how to create a MessageBox with QMessageBox.
* [OpenFileDialog](Dialogs/OpenFileDialog) shows how to create an OpenFileDialog with QFileDialog.
* [SaveFileDialog](Dialogs/SaveFileDialog) shows how to create an SaveFileDialog with QFileDialog.

## Others

* [LCDNumber2](Others/LCDNumber2) shows how to create a LCD number with QLCDNumber.
* [Wiggly](Others/Wiggly) shows how to animate a user control using QBasicTimer and timerEvent(). In addition, the example demonstrates how to use QFontMetrics to determine the size of text on screen.

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
