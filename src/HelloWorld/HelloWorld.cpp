#include <QApplication>
#include <QMainWindow>
#include <QLabel>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->label1.setText("Hello, World!");
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::darkGreen);
    this->label1.setPalette(palette);
    this->label1.setFont(QFont("Arial", 45, QFont::Bold, true));
    this->label1.move(5, 100);
    this->resize(290, 100);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("My first application");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QLabel label1 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
