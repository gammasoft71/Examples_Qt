#include <QApplication>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->button1.setText("button1");
    this->button1.move(50, 50);
    this->connect(&this->button1, &QPushButton::clicked, [&]() {
      this->label1.setText(QString("button1 clicked %1 times").arg(++this->button1Clicked));
     });

    this->button2.setText("button2");
    this->button2.move(50, 100);
    this->button2.resize(200, 75);
    this->connect(&this->button2, &QPushButton::clicked, [&]() {
      this->label2.setText(QString("button2 clicked %1 times").arg(++this->button2Clicked));
     });

    this->label1.setText("button1 clicked 0 times");
    this->label1.move(50, 200);
    this->label1.resize(200, 20);

    this->label2.setText("button2 clicked 0 times");
    this->label2.move(50, 230);
    this->label2.resize(200, 20);

    this->setCentralWidget(&this->centralWidget);
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QPushButton button1 {&this->centralWidget};
  QPushButton button2 {&this->centralWidget};
  QLabel label1 {&this->centralWidget};
  QLabel label2 {&this->centralWidget};
  int button1Clicked = 0;
  int button2Clicked = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
