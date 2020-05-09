#include <QFrame>
#include <QMainWindow>
#include <QWidget>

namespace examples {
  class Window1 : public QMainWindow {
     Q_OBJECT
  public:
     Window1() {
      widget1.move(50, 50);
      widget1.setAutoFillBackground(true);
      widget1.setPalette({QColor(0x0, 0xFf, 0x7F)});

      setCentralWidget(&frame);
      setWindowTitle("Widget example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QWidget widget1 {&frame};
  };
}
