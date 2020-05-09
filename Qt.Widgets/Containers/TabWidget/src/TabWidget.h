#include <QFrame>
#include <QMainWindow>
#include <QTabWidget>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      tabWidget1.move(10, 10);
      tabWidget1.resize(370, 250);
      tabWidget1.addTab(&tabPage1, "Tab page 1");
      tabWidget1.addTab(&tabPage2, "Tab page 2");
      tabWidget1.addTab(&tabPage3, "Tab page 3");

      setCentralWidget(&frame);
      setWindowTitle("Tab widget example");
      resize(390, 270);
    }

  private:
    QFrame frame;
    QTabWidget tabWidget1 {&frame};
    QFrame tabPage1;
    QFrame tabPage2;
    QFrame tabPage3;
  };
}
