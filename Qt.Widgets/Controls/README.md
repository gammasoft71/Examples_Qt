# Controls

[This folder](.) contains controls examples.

* [CheckBox](CheckBox/README.md) shows how to create a check box with QCheckBox.
* [CheckedListWidget](CheckedListWidget/README.md) shows how to create a checked list widget with QListWidget.
* [ComboBox](ComboBox/README.md) shows how to create a combo box with QComboBox.
* [Dial](Dial/README.md) shows how to create a dial with QDial.
* [DoubleSpinBox](DoubleSpinBox/README.md) shows how to create a double spin box with QDoubleSpinBox.
* [Label](Label/README.md) shows how to create a label with QLabel.
* [LCDNumber](LCDNumber/README.md) shows how to create a LCD number with QLCDNumber.
* [LineEdit](LineEdit/README.md) shows how to create a line edit with QLineEdit.
* [ListView](ListWidget/README.md) shows how to create a list view with QListView.
* [ListView2](ListView2/README.md) shows how to create a list view with QTreeView.
* [ListWidget](ListWidget/README.md) shows how to create a list widget with QListWidget.
* [PictureBox](PictureBox/README.md) shows how to create a picture box with QLabel.
* [PictureBox2](PictureBox2/README.md) shows how to create a picture box with QGraphicsPixmapItem.
* [ProgressBar](ProgressBar/README.md) shows how to create a ProgressBar with QProgress.
* [PushButton](PushButton/README.md) shows how to create a button and Event Click with QPushButton.
* [RadioButton](RadioButton/README.md) shows how to create a radio button with QRadioButton.
* [Slider](Slider/README.md) shows how to create a slider with QSlider.
* [SpinBox](SpinBox/README.md) shows how to create a spin box with QSpinBox.
* [SpinButton](SpinButton/README.md) shows how to create a spin button with QSpinBox.
* [ToggleButton](ToggleButton/README.md) shows how to create a toggle button with QPushButton.
* [TreeView](TreeView/README.md) shows how to create a three view with QTreeView.
* [TreeWidget](TreeWidget/README.md) shows how to create a three widget with QTreeWidget.
* [Widget](Widget/README.md) shows how to create a widget with QWidget.

## Generate and build

### Qt Creator

To build these projects, open `Controls.pro` file with Qt Creator.

### CMake

To build this project, open "Terminal" and type following lines:

Set `CMAKE_PREFIX_PATH` with Qt6 install path.

#### Windows :

``` cmake
mkdir build
cd build
cmake ..
start ./Controls.sln
```

#### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Controls.xcodeproj
```

#### Linux with Code::Blocks :

``` cmake
mkdir build
cd build
cmake .. -G "CodeBlocks - Unix Makefiles"
xdg-open ./Controls.cbp > /dev/null 2>&1
```

#### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
./AnyProject
```
