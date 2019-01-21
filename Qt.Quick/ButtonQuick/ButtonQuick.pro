QT += quick
CONFIG += c++17

QML_IMPORT_PATH =
QML_DESIGNER_IMPORT_PATH =

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS = ButtonsClicked.h

SOURCES = main.cpp

RESOURCES += qml.qrc
