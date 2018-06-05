#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardPaths>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
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

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("MainWindow");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QPushButton button {&this->centralWidget};
  QLabel label {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
