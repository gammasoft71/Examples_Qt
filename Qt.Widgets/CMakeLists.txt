cmake_minimum_required(VERSION 3.2)

# Solution
project(Qt.Widgets)

add_subdirectory(HelloWorld)
add_subdirectory(Application)
add_subdirectory(CommonControls)
add_subdirectory(Containers)

# Containers
#add_subdirectory(ColoredTabPages)
add_subdirectory(Panel)
add_subdirectory(GroupBox)
add_subdirectory(TabControl)

# Menus and Toolbars
add_subdirectory(MainMenu)
add_subdirectory(StatusBar)

# Components
add_subdirectory(Cursors)
add_subdirectory(Timer)

# Dialogs
add_subdirectory(ColorDialog)
add_subdirectory(FolderBrowserDialog)
add_subdirectory(FontDialog)
add_subdirectory(MessageBox)
add_subdirectory(OpenFileDialog)
add_subdirectory(SaveFileDialog)

# Others
add_subdirectory(Others)
