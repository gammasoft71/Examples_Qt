import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Dialogs 1.2

Window {
    visible: true
    width: 300
    height: 300
    title: "Hello World Form"

    MessageDialog {
        id: messageBox
        text: "Hello, World!"
    }

    Button {
        id: button1
        x: 10
        y: 10
        text: "Click me"
        onClicked: messageBox.visible = true
    }
}
