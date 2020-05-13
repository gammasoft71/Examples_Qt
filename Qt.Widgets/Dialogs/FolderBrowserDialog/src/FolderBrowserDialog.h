#pragma once
#include <QFileDialog>
#include <QMainWindow>
#include <QDir>
#include <QLabel>
#include <QPushButton>
#include <QStandardPaths>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      buttonFolderBrowser.setText("Folder...");
      buttonFolderBrowser.move(10, 10);
      connect(&buttonFolderBrowser, &QPushButton::clicked, [&] {
        QFileDialog folderBrowserDialog;
        folderBrowserDialog.setFileMode(QFileDialog::Directory);
        folderBrowserDialog.setOption(QFileDialog::ShowDirsOnly);
        folderBrowserDialog.setDirectory(QDir(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation)));
        if (folderBrowserDialog.exec() == QDialog::Accepted)
          label.setText(QString("Path = %1").arg(folderBrowserDialog.selectedFiles()[0]));
      });

      label.setText("Path = ");
      label.move(10, 50);
      label.resize(280, 20);

      setCentralWidget(&frame);
      setWindowTitle("Folder browser dialog example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton buttonFolderBrowser {&frame};
    QLabel label {&frame};
  };
}
