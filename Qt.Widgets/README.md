# Qt.Widgets

shows how to use Qt widgets only by programming code (c++17).

[![qt](../docs/Pictures/qt_header.png)](https://gammasoft71.wixsite.com/gammasoft/qt)

## [Hello World](HelloWorlds/README.md)

* [HelloWorldEmoticons](HelloWorlds/HelloWorldEmoticons/README.md) The classic first application "Hello, world!" with QLabel and emoticons.
* [HelloWorldLabel](HelloWorlds/HelloWorldLabel/README.md) The classic first application "Hello, world!" with QLabel.
* [HelloWorldMessageBox](HelloWorlds/HelloWorldMessageBox/README.md) The classic first application "Hello, world!" with QMessageBox.
* [HelloWorldPaint](HelloWorlds/HelloWorldPaint/README.md) The classic first application "Hello, world!" with QPainter.

## [Applications](Applications/README.md)

* [Application](Applications/Application/README.md) shows how to create an application with QApplication.
* [ApplicationAndException](ApplicationAndException/Application/README.md) shows how to create an application with QApplication and how to manage exception.
* [DarkMode](Applications/DarkMode/README.md) shows how to create a dark mode application.

## [Dialogs](Dialogs/README.md)

* [AboutBox](Dialogs/AboutBox/README.md) shows how to create an about box with QMessageBox.
* [ColorDialog](Dialogs/ColorDialog/README.md) shows how to create a color dialog with QColorDalog.
* [FolderBrowserDialog](Dialogs/FolderBrowserDialog/README.md) shows how to create a folder browser dialog with QFileDialog.
* [FontDialog](Dialogs/FontDialog/README.md) shows how to create a font dialog with QFontDialog.
* [InputDialog](Dialogs/InputDialog/README.md) shows how to create an input dialog with QInputDialog.
* [MessageBox](Dialogs/MessageBox/README.md) shows how to create a message box with QMessageBox.
* [OpenFileDialog](Dialogs/OpenFileDialog/README.md) shows how to create an open file dialog with QFileDialog.
* [SaveFileDialog](Dialogs/SaveFileDialog/README.md) shows how to create an save file dialog with QFileDialog.

## [Windows](Windows/README.md)

* [MainWindow](Windows/MainWindow/README.md) shows how to create a window with QMainWindow.

## [Menus and toolbars](MenusAndToolbars/README.md)

* [MenuBar](MenusAndToolbars/MenuBar/README.md) shows how to create a menu bar with QMenu and QAction.
* [StatusBar](MenusAndToolbars/StatusBar/README.md) shows how to create a status bar with QStatusBar.
* [ToolBar](MenusAndToolbars/ToolBar/README.md) shows how to create a toolbar bar with QToolsBar.

## [Containers](Containers/README.md)

* [Frame](Containers/Frame/README.md) shows how to create a frame with QFrame.
* [GroupBox](Containers/GroupBox/README.md) shows how to create a group box with QGroupBox.
* [TabWidget](Containers/TabWidget/README.md) shows how to create a tab widget with QTabWidget.

## [Controls](Controls/README.md)

* [CheckBox](Controls/CheckBox/README.md) shows how to create a check box with QCheckBox.
* [CheckedListWidget](Controls/CheckedListWidget/README.md) shows how to create a checked list widget with QListWidget.
* [ComboBox](Controls/ComboBox/README.md) shows how to create a combo box with QComboBox.
* [Dial](Controls/Dial/README.md) shows how to create a dial with QDial.
* [DoubleSpinBox](Controls/DoubleSpinBox/README.md) shows how to create a double spin box with QDoubleSpinBox.
* [Label](Controls/Label/README.md) shows how to create a label with QLabel.
* [LCDNumber](Controls/LCDNumber/README.md) shows how to create a LCD number with QLCDNumber.
* [LineEdit](Controls/LineEdit/README.md) shows how to create a line edit with QLineEdit.
* [ListView](Controls/ListWidget/README.md) shows how to create a list view with QListView.
* [ListView2](Controls/ListView2/README.md) shows how to create a list view with QTreeView.
* [ListWidget](Controls/ListWidget/README.md) shows how to create a list widget with QListWidget.
* [PictureBox](Controls/PictureBox/README.md) shows how to create a picture box with QLabel.
* [PictureBox2](Controls/PictureBox2/README.md) shows how to create a picture box with QGraphicsPixmapItem.
* [ProgressBar](Controls/ProgressBar/README.md) shows how to create a ProgressBar with QProgress.
* [PushButton](Controls/PushButton/README.md) shows how to create a button and Event Click with QPushButton.
* [RadioButton](Controls/RadioButton/README.md) shows how to create a radio button with QRadioButton.
* [Slider](Controls/Slider/README.md) shows how to create a slider with QSlider.
* [SpinBox](Controls/SpinBox/README.md) shows how to create a spin box with QSpinBox.
* [SpinButton](Controls/SpinButton/README.md) shows how to create a spin button with QSpinBox.
* [ToggleButton](Controls/ToggleButton/README.md) shows how to create a toggle button with QPushButton.
* [TreeView](Controls/TreeView/README.md) shows how to create a three view with QTreeView.
* [TreeWidget](Controls/TreeWidget/README.md) shows how to create a three widget with QTreeWidget.
* [Widget](Controls/Widget/README.md) shows how to create a widget with QWidget.

## [Components](Components/README.md)

* [Cursors](Components/Cursors/README.md) shows how to associate cursor to widget with QCursor.
* [Timer](Components/Timer/README.md) shows how to create a Timer with QTimer.

## [User Controls](UserControls/README.md)

* [Line](UserControls/Line/README.md) shows how to create a custom widget line with QFrame.

## [Others](Others/README.md)

* [ButtonWithStyleSheet](Others/ButtonWithStyleSheet/README.md) show how to use stylesheet with QPushButton.
* [InputDialogMultiline](Others/InputDialogMultiline/README.md) show how to use multiline input dialog with QInputDialog.
* [InputDialogPassword](Others/InputDialogPassword/README.md) show how to use password input dialog with QInputDialog.
* [LCDNumber2](Others/LCDNumber2/README.md) shows how to create a LCD number with QLCDNumber.
* [Wiggly](Others/Wiggly/README.md) shows how to animate a user control using QBasicTimer and timerEvent(). In addition, the example demonstrates how to use QFontMetrics to determine the size of text on screen.

## Generate and build

### Qt Creator

To build these projects, open `Qt.Widgets.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Qt.Widgets.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Qt.Widgets.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Qt.Widgets.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
