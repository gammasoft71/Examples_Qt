#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QTabWidget>

class Form : public QMainWindow {
public:
  Form() {
    this->tabControl1.move(10, 10);
    this->tabControl1.resize(370, 250);
    this->tabControl1.addTab(&this->tabPage1, "tabPage1");
    this->tabControl1.addTab(&this->tabPage2, "tabPage2");
    this->tabControl1.addTab(&this->tabPage3, "tabPage3");

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("TabControl example");
    this->resize(390, 270);
  }

private:
  QFrame panel;
  QTabWidget tabControl1 {&this->panel};
  QFrame tabPage1;
  QFrame tabPage2;
  QFrame tabPage3;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
