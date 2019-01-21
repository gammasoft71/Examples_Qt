#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>

class Form : public QMainWindow {
public:
   Form() {
    this->label1.setText("label1");
    this->label1.move(10, 10);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("Label example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QLabel label1 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
