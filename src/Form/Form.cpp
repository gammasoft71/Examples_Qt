#include <QApplication>
#include <QCloseEvent>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->button.setText("Close");
    this->button.move(10, 10);
    this->connect(&this->button, &QPushButton::clicked, [&]() {
      this->close();
     });

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Form");
    this->resize(640, 480);
  }

  void closeEvent(QCloseEvent *event) override {
    event->ignore();
    if (QMessageBox::question(this, "Close Form", "Are you sure you want exit?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
      this->QMainWindow::closeEvent(event);
  }

private:
  QWidget centralWidget;
  QPushButton button {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
