#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QRadioButton>

class Form : public QMainWindow {
public:
  Form() {
    this->radioButton1.setText("radioButton 1");
    this->radioButton1.move(30, 30);
    this->radioButton1.setChecked(true);

    this->radioButton2.setText("radioButton 2");
    this->radioButton2.move(30, 60);

    this->radioButton3.setText("radioButton 3");
    this->radioButton3.move(30, 90);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("RadioButton example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QRadioButton radioButton1 {&this->panel};
  QRadioButton radioButton2 {&this->panel};
  QRadioButton radioButton3 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
