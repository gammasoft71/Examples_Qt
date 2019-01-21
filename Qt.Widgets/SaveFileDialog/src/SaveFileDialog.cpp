#include <QApplication>
#include <QFileDialog>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardPaths>

class Form : public QMainWindow {
public:
  Form() {
    this->button.setText("Save...");
    this->button.move(10, 10);
    this->connect(&this->button, &QPushButton::clicked, [&]() {
      QFileDialog saveFileDialog;
      saveFileDialog.setNameFilters({"Text Files (*.txt)", "All Files (*)"});
      saveFileDialog.setAcceptMode(QFileDialog::AcceptSave);
      saveFileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
      saveFileDialog.selectFile("MyFile.txt");
     if (saveFileDialog.exec() == QDialog::Accepted)
        this->label.setText(QString("File = %1").arg(saveFileDialog.selectedFiles()[0]));
    });

    this->label.move(10, 50);
    this->label.resize(280, 20);
    this->label.setText("File = ");

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("MainWindow");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QPushButton button {&this->panel};
  QLabel label {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
