#include <QApplication>
#include <QGroupBox>
#include <QMainWindow>

class Form : public QMainWindow {
public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->groupBox1.setTitle("GroupBox 1");
    this->groupBox1.move(10, 10);
    this->groupBox1.resize(305, 460);


    this->groupBox2.setTitle("GroupBox 2");
    this->groupBox2.move(325, 10);
    this->groupBox2.resize(305, 460);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Label example");
    this->resize(640, 480);
  }

private:
  QWidget centralWidget;
  QGroupBox groupBox1 {&this->centralWidget};
  QGroupBox groupBox2 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
