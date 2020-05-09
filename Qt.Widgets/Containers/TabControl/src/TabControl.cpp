#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QTabWidget>

class Window1 : public QMainWindow {
public:
  Window1() {
    tabControl1.move(10, 10);
    tabControl1.resize(370, 250);
    tabControl1.addTab(&tabPage1, "tabPage1");
    tabControl1.addTab(&tabPage2, "tabPage2");
    tabControl1.addTab(&tabPage3, "tabPage3");

    setCentralWidget(&frame);
    setWindowTitle("TabControl example");
    resize(390, 270);
  }

private:
  QFrame frame;
  QTabWidget tabControl1 {&frame};
  QFrame tabPage1;
  QFrame tabPage2;
  QFrame tabPage3;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
