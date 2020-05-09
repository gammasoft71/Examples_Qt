#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QPixmap>

using QPictureBox = QLabel;

class Window1 : public QMainWindow {
  Q_OBJECT
public:
  Window1() {
    pictureBox1.move(10, 10);
    pictureBox1.resize(280, 280);
    pictureBox1.setFrameStyle(QFrame::Box|QFrame::Plain);
    pictureBox1.setAutoFillBackground(true);
    pictureBox1.setPalette({QLineEdit().palette().color(QPalette::Base)});
    pictureBox1.setAlignment (Qt::AlignCenter);
    pictureBox1.setPixmap(QPixmap(":/Logo"));

    setCentralWidget(&frame);
    setWindowTitle("Picture box example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QPictureBox pictureBox1 {&frame};
};
