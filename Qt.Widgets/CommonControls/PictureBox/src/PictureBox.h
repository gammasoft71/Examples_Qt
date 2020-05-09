#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPixmap>

namespace examples {
  using PictureBox = QLabel;

  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      pictureBox1.move(10, 10);
      pictureBox1.resize(280, 280);
      pictureBox1.setFrameStyle(QFrame::StyledPanel|QFrame::Plain);
      pictureBox1.setAutoFillBackground(true);
      pictureBox1.setAlignment (Qt::AlignCenter);
      pictureBox1.setPixmap(QPixmap(":/Logo"));

      setCentralWidget(&frame);
      setWindowTitle("Picture box example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    PictureBox pictureBox1 {&frame};
  };
}
