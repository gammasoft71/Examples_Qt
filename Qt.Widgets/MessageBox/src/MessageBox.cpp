#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

class Form : public QMainWindow {
public:
  Form() {
    this->buttonShowMessage.setText("Message...");
    this->buttonShowMessage.move(10, 10);
    this->connect(&this->buttonShowMessage, &QPushButton::clicked, [&]() {
      QMessageBox::StandardButton result = QMessageBox::information(this, "Message", "Hello, World!", QMessageBox::Ok | QMessageBox::Cancel);
      labelDialogResult.setText(QString("DialogResult = %1").arg(result == QMessageBox::Ok ? "QMessageBox::Ok" : "QMessageBox::Cancel"));
     });

    this->labelDialogResult.move(10, 50);
    this->labelDialogResult.resize(280, 20);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("MessageBox example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QPushButton buttonShowMessage {&this->panel};
  QLabel labelDialogResult {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
