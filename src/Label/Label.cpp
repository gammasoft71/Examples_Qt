#include <QApplication>
#include <QMainWindow>
#include <QLabel>

class Form : public QMainWindow {
public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->label1.setText("label1");
    this->label1.move(10, 10);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Label example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QLabel label1 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
