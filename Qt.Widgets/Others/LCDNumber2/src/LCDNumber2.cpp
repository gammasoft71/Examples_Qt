#include "LCDNumber.h"
#include <QApplication>
#include <QObject>
#include <QFont>
#include <QFrame>
#include <QMainWindow>
#include <QMouseEvent>
#include <QTimer>

class Window1 : public QMainWindow {
public:
  Window1() {
    lcdNumber.display(QString("%1").number(static_cast<double>(counter) / 10, 'f', 1));
    lcdNumber.move(0, 0);
    lcdNumber.resize(1456, 503);
    lcdNumber.setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
    lcdNumber.setFrameStyle(QFrame::NoFrame);
    lcdNumber.setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Window, QColor::fromRgb(0, 0, 255).darker(1500));
    palette.setColor(QPalette::WindowText, QColor::fromRgb(0, 0, 255));
    lcdNumber.setPalette(palette);
    connect(&lcdNumber, &LCDNumber::clicked, [&](QMouseEvent* event) {
      if (event->button() == Qt::MouseButton::RightButton) {
        counter = 0;
        lcdNumber.display(QString("%1").number(static_cast<double>(counter) / 10, 'f', 1));
      } else if (event->button() == Qt::MouseButton::LeftButton) {
        if (timer.isActive())
          timer.stop();
        else
          timer.start();
      }
     });

    timer.setInterval(100);
    connect(&timer, &QTimer::timeout, [&]() {
      lcdNumber.display(QString("%1").number(static_cast<double>(++counter) / 10, 'f', 1));
    });

    setCentralWidget(&frame);
    setWindowTitle("LCD number example 2");
    resize(1456, 503);
  }

private:
  QFrame frame;
  LCDNumber lcdNumber {&frame};
  QTimer timer {this};
  int counter = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
