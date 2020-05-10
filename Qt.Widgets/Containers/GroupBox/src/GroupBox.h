#include <QFrame>
#include <QGroupBox>
#include <QMainWindow>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      groupBox1.setTitle("GroupBox 1");
      groupBox1.move(10, 10);
      groupBox1.resize(305, 460);

      groupBox2.move(325, 10);
      groupBox2.resize(305, 460);

      setCentralWidget(&frame);
      setWindowTitle("Group box example");
      resize(640, 480);
    }

  private:
    QFrame frame;
    QGroupBox groupBox1 {&frame};
    QGroupBox groupBox2 {&frame};
  };
}
