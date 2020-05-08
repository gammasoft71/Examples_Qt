#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>

class Window1 : public QMainWindow {
public:
   Window1() {
    label1.setText("label1");
    label1.move(10, 10);

    setCentralWidget(&frame);
    setWindowTitle("Label example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QLabel label1 {&frame};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
