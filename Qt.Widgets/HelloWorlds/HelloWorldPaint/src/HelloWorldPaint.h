#pragma once
#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QScreen>

namespace Examples {
  #if defined(__APPLE__)
  inline int pointsToNativeFontGraphicsUntit(int size) {
    return static_cast<float>(size) /QApplication::primaryScreen()->logicalDotsPerInch() * 96.0f;  // font is in pixels and not in points
  }
  #else
  inline int pointsToNativeFontGraphicsUntit(int size) {
    return size;  // font is in points
  }
  #endif

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
      painter.setFont({font().family(), pointsToNativeFontGraphicsUntit(34), QFont::Bold, true});
      painter.drawText(e->rect(), "Hello, World!", QTextOption(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter));
    }
  };
}
