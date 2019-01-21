#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLineEdit>

class Form : public QMainWindow {
public:
  Form() {
    this->textBox1.setText("textBox1");
    this->textBox1.move(10, 10);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("TextBox example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QLineEdit textBox1 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
