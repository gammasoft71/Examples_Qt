#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

class Window1 : public QMainWindow {
public:
  Window1() {
    buttonShowMessage.setText("Message...");
    buttonShowMessage.move(10, 10);
    connect(&buttonShowMessage, &QPushButton::clicked, [&]() {
      QMessageBox::StandardButton result = QMessageBox::information(this, "Message", "Hello, World!", QMessageBox::Ok | QMessageBox::Cancel);
      labelDialogResult.setText(QString("DialogResult = %1").arg(result == QMessageBox::Ok ? "QMessageBox::Ok" : "QMessageBox::Cancel"));
     });

    labelDialogResult.move(10, 50);
    labelDialogResult.resize(280, 20);

    setCentralWidget(&frame);
    setWindowTitle("MessageBox example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QPushButton buttonShowMessage {&frame};
  QLabel labelDialogResult {&frame};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
