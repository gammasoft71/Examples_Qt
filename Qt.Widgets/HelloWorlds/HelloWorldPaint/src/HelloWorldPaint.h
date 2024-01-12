#pragma once
#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QScreen>

namespace Examples {
  class Window1 : public QMainWindow {
  public:
    Window1() {
      setWindowTitle("Hello world (paint)");
      resize(300, 300);
    }

  protected:
    void paintEvent(QPaintEvent* e) override {
      QPainter painter(this);
      painter.setPen(Qt::GlobalColor::blue);
      painter.setFont({font().family(), 34, QFont::Bold, true});
      painter.drawText(e->rect(), "Hello, World!", QTextOption(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter));
    }
  };
}
