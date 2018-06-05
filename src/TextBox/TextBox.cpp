#include <QApplication>
#include <QMainWindow>
#include <QLineEdit>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->textBox1.setText("textBox1");
    this->textBox1.move(10, 10);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("TextBox example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QLineEdit textBox1 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
