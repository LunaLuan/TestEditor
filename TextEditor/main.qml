import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import org.qtproject.example 1.0




ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Text Editor example")



    MainForm {
        anchors.fill: parent


        Action {
            id: cutAction
            shortcut: StandardKey.Cut
            onTriggered:
        }
    }




    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }



}
