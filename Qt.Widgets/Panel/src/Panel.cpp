#include <QApplication>
#include <QMainWindow>
#include <QFrame>

class Form : public QMainWindow {
public:
  Form() {
    this->panel1.setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
    this->panel1.move(10, 10);
    this->panel1.resize(305, 460);


    this->panel2.setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    this->panel2.move(325, 10);
    this->panel2.resize(305, 460);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("Panel example");
    this->resize(640, 480);
  }

private:
  QFrame panel;
  QFrame panel1 {&this->panel};
  QFrame panel2 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
