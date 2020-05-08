#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>

class Window1 : public QMainWindow {
public:
  Window1() {
    label1.setText("Hello, World!");
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::darkGreen);
    label1.setPalette(palette);
    label1.setFont(QFont("Arial", 34/0.72, QFont::Bold, true));
    label1.move(5, 100);
    resize(290, 100);

    setCentralWidget(&panel);
    setWindowTitle("My first application");
    resize(300, 300);
  }

private:
  QFrame panel;
  QLabel label1 {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
