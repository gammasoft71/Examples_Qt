#include <QMainWindow>
#include <QFrame>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      frame1.setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
      frame1.move(10, 10);
      frame1.resize(305, 460);


      frame2.setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
      frame2.move(325, 10);
      frame2.resize(305, 460);

      setCentralWidget(&frame);
      setWindowTitle("Frame example");
      resize(640, 480);
    }

  private:
    QFrame frame;
    QFrame frame1 {&frame};
    QFrame frame2 {&frame};
  };
}
