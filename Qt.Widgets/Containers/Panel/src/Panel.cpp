#include <QApplication>
#include <QMainWindow>
#include <QFrame>

class Window1 : public QMainWindow {
public:
  Window1() {
    panel1.setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
    panel1.move(10, 10);
    panel1.resize(305, 460);


    panel2.setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    panel2.move(325, 10);
    panel2.resize(305, 460);

    setCentralWidget(&panel);
    setWindowTitle("Panel example");
    resize(640, 480);
  }

private:
  QFrame panel;
  QFrame panel1 {&panel};
  QFrame panel2 {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
