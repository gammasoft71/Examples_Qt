#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QLabel>

class Form : public QMainWindow {
public:
  Form() {
    this->label1.setText("Hello, World!");
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::darkGreen);
    this->label1.setPalette(palette);
    this->label1.setFont(QFont("Arial", 34/0.72, QFont::Bold, true));
    this->label1.move(5, 100);
    this->resize(290, 100);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("My first application");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QLabel label1 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
