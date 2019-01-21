import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 300
    height: 300
    title: "My first application"

    Label {
        id: label1
        x: 5
        y: 100
        width: 290
        height: 100
        text: "Hello, World!"
        color: "darkGreen"
        font.family: "Arial"
        font.pointSize: 45
        font.bold: true
        font.italic: true
    }
}
