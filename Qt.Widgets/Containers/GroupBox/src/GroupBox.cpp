#include <QApplication>
#include <QFrame>
#include <QGroupBox>
#include <QMainWindow>

class Window1 : public QMainWindow {
public:
  Window1() {
    groupBox1.setTitle("GroupBox 1");
    groupBox1.move(10, 10);
    groupBox1.resize(305, 460);


    groupBox2.setTitle("GroupBox 2");
    groupBox2.move(325, 10);
    groupBox2.resize(305, 460);

    setCentralWidget(&frame);
    setWindowTitle("Label example");
    resize(640, 480);
  }

private:
  QFrame frame;
  QGroupBox groupBox1 {&frame};
  QGroupBox groupBox2 {&frame};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
