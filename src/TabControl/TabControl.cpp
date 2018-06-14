#include <QApplication>
#include <QMainWindow>
#include <QFrame>
#include <QTabWidget>

class Form : public QMainWindow {
public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->tabControl1.move(10, 10);
    this->tabControl1.resize(370, 250);
    this->tabControl1.addTab(&this->tabPage1, "tabPage1");
    this->tabControl1.addTab(&this->tabPage2, "tabPage2");
    this->tabControl1.addTab(&this->tabPage3, "tabPage3");

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("TabControl example");
    this->resize(390, 270);
  }

private:
  QWidget centralWidget;
  QTabWidget tabControl1 {&this->centralWidget};
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
