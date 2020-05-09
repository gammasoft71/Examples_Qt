#include <QFrame>
#include <QMainWindow>
#include <QLabel>

class Window1 : public QMainWindow {
  Q_OBJECT
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
