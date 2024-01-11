#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QDial>
#include <QLabel>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
     Window1() {
       dial1.setMaximum(200);
       dial1.setValue(100);
       dial1.move(10, 10);
       connect(&dial1, &QDial::valueChanged, [&] {
         label1.setText(QString("%1").arg(dial1.value()));
        });

       label1.move(10, 150);
       label1.resize(200, 20);
       label1.setText(QString("%1").arg(dial1.value()));

      setCentralWidget(&frame);
      setWindowTitle("Dial example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QDial dial1 {&frame};
    QLabel label1 {&frame};
  };
}
