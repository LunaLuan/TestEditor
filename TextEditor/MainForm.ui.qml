import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: item1
    width: 640
    height: 480
    property alias openToolButton: openToolButton
    property alias newToolButton: newToolButton
    property alias txtFile: txtFile
    property alias pasteToolButton: pasteToolButton
    property alias copyToolButton: copyToolButton
    property alias cutToolButton: cutToolButton
    property alias saveToolButton: saveToolButton

    ToolBar {
        id: toolBar
        width: parent.width

        ToolButton {
            id: newToolButton
            text: "New"
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: 20
        }

        ToolButton {
            id: openToolButton
            text: "Open"
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: newToolButton.right
            anchors.leftMargin: 20
        }

        ToolButton {
            id: saveToolButton
            text: "Save"
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: openToolButton.right
            anchors.leftMargin: 20
        }

        ToolButton {
            id: cutToolButton
            text: "Cut"
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: saveToolButton.right
            anchors.leftMargin: 20
        }

        ToolButton {
            id: copyToolButton
            text: "Copy"
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: cutToolButton.right
            anchors.leftMargin: 20
        }

        ToolButton {
            id: pasteToolButton
            text: "Paste"
            anchors.left: copyToolButton.right
            anchors.leftMargin: 20
            anchors.verticalCenter: parent.verticalCenter
        }

    }

    TextArea {
        id: txtFile
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.right: parent.right
        anchors.rightMargin: 0
        anchors.top: toolBar.bottom
        anchors.topMargin: 0
    }


}
