#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QStatusBar>

class Window1 : public QMainWindow {
public:
  Window1() {
    QStatusBar* statusBar = this->statusBar();
    statusBar->showMessage("Status bar...");

    setCentralWidget(&frame);
    setWindowTitle("Label example");
    resize(300, 300);
  }

private:
  QFrame frame;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
