import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 300
    height: 300
    title: "CheckBox examples"

    CheckBox {
        id: checkBox1
        x: 30
        y: 30
        text: qsTr("Checked")
        checkState: Qt.Checked
    }

    CheckBox {
        id: checkBox2
        x: 30
        y: 70
        text: qsTr("Unchecked")
        checkState: Qt.Unchecked
    }

    CheckBox {
        id: checkBox3
        x: 30
        y: 110
        text: qsTr("Indeterminate")
        checkState: Qt.PartiallyChecked
    }
}
