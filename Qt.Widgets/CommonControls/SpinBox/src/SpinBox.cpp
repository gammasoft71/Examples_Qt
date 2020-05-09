#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QWidget>

class Window1 : public QMainWindow {
public:
   Window1() {
    widget1.move(50, 50);
    widget1.setAutoFillBackground(true);
    widget1.setPalette({QColor(0x0, 0xFf, 0x7F)});

    setCentralWidget(&frame);
    setWindowTitle("Widget example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QWidget widget1 {&frame};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
