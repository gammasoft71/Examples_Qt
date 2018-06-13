#include <QApplication>
#include <QMainWindow>
#include <QFrame>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->panel1.setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
    this->panel1.move(10, 10);
    this->panel1.resize(305, 460);


    this->panel2.setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    this->panel2.move(325, 10);
    this->panel2.resize(305, 460);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Panel example");
    this->resize(640, 480);
  }

private:
  QWidget centralWidget;
  QFrame panel1 {&this->centralWidget};
  QFrame panel2 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
