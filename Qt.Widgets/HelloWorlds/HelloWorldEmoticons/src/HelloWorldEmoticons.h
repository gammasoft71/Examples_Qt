#pragma once
#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>
#include <QScreen>

namespace Examples {
  class Window1 : public QMainWindow {
  public:
    Window1() {
      label1.setText("\U0001F44B, \U0001F30E\U00002757");
      label1.setFont({label1.font().family(), 72});
      label1.resize(label1.sizeHint());

      setCentralWidget(&frame);
      setWindowTitle("Hello world (emoticons)");
      resize(label1.sizeHint());
    }

  private:
    QFrame frame;
    QLabel label1 {&frame};
  };
}
