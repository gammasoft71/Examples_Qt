
# Qt Examples

shows how to use Qt widgets only by programming code (c++17).

[![qt](docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [Hello World](HelloWorld/README.md)

* [HelloWorldEmoticons](Qt.Widgets/HelloWorlds/HelloWorldEmoticons) The classic first application "Hello, world!" with QLabel and emoticons.
* [HelloWorldLabel](Qt.Widgets/HelloWorlds/HelloWorldLabel) The classic first application "Hello, world!" with QLabel.
* [HelloWorldMessageBox](Qt.Widgets/HelloWorlds/HelloWorldMessageBox) The classic first application "Hello, world!" with QMessageBox.
* [HelloWorldPaint](Qt.Widgets/HelloWorlds/HelloWorldPaint) The classic first application "Hello, world!" with QPainter.

## Application

* [Application](Qt.Widgets/Applications/Application) shows how to create an application with QApplication.
* [DarkMode](Qt.Widgets/Applications/DarkMode) shows how to create a dark mode application.

## Dialogs

* [ColorDialog](Qt.Widgets/Dialogs/ColorDialog) shows how to create a ColorDialog with QColorDalog.
* [FolderBrowserDialog](Qt.Widgets/Dialogs/FolderBrowserDialog) shows how to create a FolderBrowserDialog with QFileDialog.
* [FontDialog](Qt.Widgets/Dialogs/FontDialog) shows how to create a FontDialog with QFontDialog.
* [MessageBox](Qt.Widgets/Dialogs/MessageBox) shows how to create a MessageBox with QMessageBox.
* [OpenFileDialog](Qt.Widgets/Dialogs/OpenFileDialog) shows how to create an OpenFileDialog with QFileDialog.
* [SaveFileDialog](Qt.Widgets/Dialogs/SaveFileDialog) shows how to create an SaveFileDialog with QFileDialog.

## Windows

* [MainWindow](Qt.Widgets/Windows/MainWindow) shows how to create a window with QMainWindow.

## Menus and toolbars

* [MenuBar](Qt.Widgets/MenusAndToolbars/MenuBar) shows how to create a menu bar with QMenu and QAction.
* [StatusBar](Qt.Widgets/MenusAndToolbars/StatusBar) shows how to create a status bar with QStatusBar.
* [ToolBar](Qt.Widgets/MenusAndToolbars/ToolBar) shows how to create a toolbar bar with QToolBar.

## Containers

* [Frame](Qt.Widgets/Containers/Frame) shows how to create a frame with QFrame.
* [GroupBox](Qt.Widgets/Containers/GroupBox) shows how to create a group box with QGroupBox.
* [TabWidget](Qt.Widgets/Containers/TabWidget) shows how to create a tab widget with QTabWidget.
* [Window](Qt.Widgets/Containers/Window) shows how to create a window with QMainWindow.

## Controls

* [CheckBox](Qt.Widgets/Controls/CheckBox) shows how to create a check box with QCheckBox.
* [CheckedListWidget](Qt.Widgets/Controls/CheckedListWidget) shows how to create a checked list widget with QListWidget.
* [ComboBox](Qt.Widgets/Controls/ComboBox) shows how to create a combo box with QComboBox.
* [Dial](Qt.Widgets/Controls/Dial) shows how to create a dialx with QDial.
* [DoubleSpinBox](Qt.Widgets/Controls/DoubleSpinBox) shows how to create a double spin box with QDoubleSpinBox.
* [LCDNumber](Qt.Widgets/Controls/LCDNumber) shows how to create a LCD number with QLCDNumber.
* [Label](Qt.Widgets/Controls/Label) shows how to create a label with QLabel.
* [LineEdit](Qt.Widgets/Controls/LineEdit) shows how to create a line edit with QLineEdit.
* [ListView](Qt.Widgets/Controls/ListWidget) shows how to create a list view with QListView.
* [ListView2](Qt.Widgets/Controls/ListView2) shows how to create a list view with QTreeView.
* [ListWidget](Qt.Widgets/Controls/ListWidget) shows how to create a list widget with QListWidget.
* [PictureBox](Qt.Widgets/Controls/PictureBox) shows how to create a picture box with QLabel.
* [PictureBox2](Qt.Widgets/Controls/PictureBox2) shows how to create a picture box with QGraphicsPixmapItem.
* [ProgressBar](Qt.Widgets/Controls/ProgressBar) shows how to create a ProgressBar with QProgress.
* [PushButton](Qt.Widgets/Controls/PushButton) shows how to create a button and Event Click with QPushButton.
* [RadioButton](Qt.Widgets/Controls/RadioButton) shows how to create a radio button with QRadioButton.
* [Slider](Qt.Widgets/Controls/Slider) shows how to create a slider with QSlider.
* [SpinBox](Qt.Widgets/Controls/SpinBox) shows how to create a spin box with QSpinBox.
* [SpinButton](Qt.Widgets/Controls/SpinButton) shows how to create a spin button with QSpinBox.
* [ToggleButton](Qt.Widgets/Controls/ToggleButton) shows how to create a toggle button with QPushButton.
* [TreeView](Qt.Widgets/Controls/TreeView) shows how to create a three view with QTreeView.
* [TreeWidget](Qt.Widgets/Controls/TreeWidget) shows how to create a three widget with QTreeWidget.
* [Widget](Qt.Widgets/Controls/ToggleButton) shows how to create a widget with QWidget.

## Components

* [Cursors](Qt.Widgets/Components/Cursors) shows how to associate cursor to widget with QCursor.
* [Timer](Qt.Widgets/Components/Timer) shows how to create a Timer with QTimer.

## User Controls

* [Line](Qt.Widgets/UserControls/Line) shows how to create a custom widget line with QFrame.

## Others

* [LCDNumber2](Qt.Widgets/Others/LCDNumber2) shows how to create a LCD number with QLCDNumber.
* [Wiggly](Qt.Widgets/Others/Wiggly) shows how to animate a user control using QBasicTimer and timerEvent(). In addition, the example demonstrates how to use QFontMetrics to determine the size of text on screen.

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
start ./Qt.Widgets.sln
```

Select any project and type Ctrl+F5 to build and run it.

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Widgets.xcodeproj
```

Select any project and type Cmd+R to build and run it.

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.Widgets.cbp > /dev/null 2>&1
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
