#pragma once
#include <QFileDialog>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardPaths>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      button.setText("Save...");
      button.move(10, 10);
      connect(&button, &QPushButton::clicked, [&]() {
        QFileDialog saveFileDialog;
        saveFileDialog.setNameFilters({"Text Files (*.txt)", "All Files (*)"});
        saveFileDialog.setAcceptMode(QFileDialog::AcceptSave);
        saveFileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
        saveFileDialog.selectFile("MyFile.txt");
       if (saveFileDialog.exec() == QDialog::Accepted) {
          label.setText(QString("File = %1").arg(saveFileDialog.selectedFiles()[0]));
          label.resize(label.sizeHint());
        }
      });

      label.move(10, 50);
      label.setText("File = ");

      setCentralWidget(&frame);
      setWindowTitle("Save file dialog example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button {&frame};
    QLabel label {&frame};
  };
}
