#include <QApplication>
#include <QMainWindow>
#include <QRadioButton>

class Form : public QMainWindow {
public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->radioButton1.setText("radioButton 1");
    this->radioButton1.move(30, 30);
    this->radioButton1.setChecked(true);

    this->radioButton2.setText("radioButton 2");
    this->radioButton2.move(30, 60);

    this->radioButton3.setText("radioButton 3");
    this->radioButton3.move(30, 90);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("RadioButton example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QRadioButton radioButton1 {&this->centralWidget};
  QRadioButton radioButton2 {&this->centralWidget};
  QRadioButton radioButton3 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
