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
      label1.setText("Hello, World!");
      QPalette palette;
      palette.setColor(QPalette::WindowText, Qt::GlobalColor::darkGreen);
      label1.setPalette(palette);
      label1.setFont({label1.font().family(), 34, QFont::Bold, true});
      label1.setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
      label1.setWordWrap(true);

      setCentralWidget(&label1);
      setWindowTitle("Hello world (label)");
      resize(300, 300);
    }

  private:
    QLabel label1 {this};
  };
}
