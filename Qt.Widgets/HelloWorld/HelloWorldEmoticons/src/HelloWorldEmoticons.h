#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>
#include <QScreen>

namespace Examples {
  #if defined(__APPLE__)
  int pointsToNativeFontGraphicsUntit(int size) {
    return static_cast<float>(size) /QApplication::primaryScreen()->logicalDotsPerInch() * 96.0f;  // font is in pixels and not in points
  }
  #else
  int pointsToNativeFontGraphicsUntit(int size) {
    return size;  // font is in points
  }
  #endif

  class Window1 : public QMainWindow {
  public:
    Window1() {
      label1.setText("\U0001F44B, \U0001F30E\U00002757");
      label1.setFont({label1.font().family(), pointsToNativeFontGraphicsUntit(72)});
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
