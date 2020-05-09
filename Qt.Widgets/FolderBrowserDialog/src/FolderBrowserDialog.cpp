#include <QApplication>
#include <QFileDialog>
#include <QMainWindow>
#include <QDir>
#include <QLabel>
#include <QPushButton>
#include <QStandardPaths>

class Window1 : public QMainWindow {
public:
  Window1() {
    buttonFolderBrowser.setText("Folder...");
    buttonFolderBrowser.move(10, 10);
    connect(&buttonFolderBrowser, &QPushButton::clicked, [&]() {
      QFileDialog folderBrowserDialog;
      folderBrowserDialog.setFileMode(QFileDialog::Directory);
      folderBrowserDialog.setOption(QFileDialog::ShowDirsOnly);
      folderBrowserDialog.setDirectory(QDir(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation)));
      if (folderBrowserDialog.exec() == QDialog::Accepted) {
        label.setText(QString("Path = %1").arg(folderBrowserDialog.selectedFiles()[0]));
      }
    });

    label.setText("Path = ");
    label.move(10, 50);
    label.resize(280, 20);

    setCentralWidget(&frame);
    setWindowTitle("FolderBrowserDialog example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QPushButton buttonFolderBrowser {&frame};
  QLabel label {&frame};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
