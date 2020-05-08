#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>

class Window1 : public QMainWindow {
public:
  Window1() {
    pushButton1.setText("button1");
    pushButton1.move(50, 50);
    connect(&pushButton1, &QPushButton::clicked, [&]() {
      label1.setText(QString("button1 clicked %1 times").arg(++button1Clicked));
     });

    pushButton2.setText("button2");
    pushButton2.setAutoRepeat(true);
    pushButton2.move(50, 100);
    pushButton2.resize(200, 75);
    connect(&pushButton2, &QPushButton::clicked, [&]() {
      label2.setText(QString("button2 clicked %1 times").arg(++button2Clicked));
     });

    label1.setText("button1 clicked 0 times");
    label1.move(50, 200);
    label1.resize(200, 20);

    label2.setText("button2 clicked 0 times");
    label2.move(50, 230);
    label2.resize(200, 20);

    setCentralWidget(&frame);
    setWindowTitle("Push button example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QPushButton pushButton1 {&frame};
  QPushButton pushButton2 {&frame};
  QLabel label1 {&frame};
  QLabel label2 {&frame};
  int button1Clicked = 0;
  int button2Clicked = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
