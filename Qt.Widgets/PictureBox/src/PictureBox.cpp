#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPixmap>

using QPictureBox = QLabel;

class Form : public QMainWindow {
public:
  Form() {
    this->pictureBox1.move(10, 10);
    this->pictureBox1.resize(280, 280);
    this->pictureBox1.setFrameStyle(QFrame::Box | QFrame::Plain);
    this->pictureBox1.setAlignment (Qt::AlignCenter);
    this->pictureBox1.setPixmap(QPixmap(":/Logo"));

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("PictureBox example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QPictureBox pictureBox1 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
