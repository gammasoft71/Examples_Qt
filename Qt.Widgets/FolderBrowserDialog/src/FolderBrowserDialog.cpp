#include <QApplication>
#include <QFileDialog>
#include <QMainWindow>
#include <QDir>
#include <QLabel>
#include <QPushButton>
#include <QStandardPaths>

class Form : public QMainWindow {
public:
  Form() {
    this->buttonFolderBrowser.setText("Folder...");
    this->buttonFolderBrowser.move(10, 10);
    this->connect(&this->buttonFolderBrowser, &QPushButton::clicked, [&]() {
      QFileDialog folderBrowserDialog;
      folderBrowserDialog.setFileMode(QFileDialog::Directory);
      folderBrowserDialog.setOption(QFileDialog::ShowDirsOnly);
      folderBrowserDialog.setDirectory(QDir(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation)));
      if (folderBrowserDialog.exec() == QDialog::Accepted) {
        this->label.setText(QString("Path = %1").arg(folderBrowserDialog.selectedFiles()[0]));
      }
    });

    this->label.setText("Path = ");
    this->label.move(10, 50);
    this->label.resize(280, 20);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("FolderBrowserDialog example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QPushButton buttonFolderBrowser {&this->panel};
  QLabel label {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
