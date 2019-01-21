#include <QApplication>
#include <QFont>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QTimer>

class Form : public QMainWindow {
public:
  Form() {
    this->label.setText(QString("%1").number(static_cast<double>(this->counter) / 10, 'f', 1));
    this->label.move(10, 10);
    this->label.resize(210, 70);
    this->label.setFont(QFont("Arial", 64, QFont::Normal, true));
    QPalette palette;
    palette.setColor(QPalette::WindowText, QColor::fromRgb(30, 144, 255));
    this->label.setPalette(palette);

    this->button.setText("Start");
    this->button.move(10, 90);
    this->connect(&this->button, &QPushButton::clicked, [&]() {
      if (this->timer.isActive())
        this->timer.stop();
      else
        this->timer.start();
      this->button.setText(this->timer.isActive() ? "Stop" : "Start");
     });

    this->timer.setInterval(100);
    this->connect(&this->timer, &QTimer::timeout, [&]() {
      this->label.setText(QString("%1").number(static_cast<double>(++this->counter) / 10, 'f', 1));
    });

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("Timer example");
    this->resize(230, 130);
  }

private:
  QFrame panel;
  QLabel label {&this->panel};
  QPushButton button {&this->panel};
  QTimer timer {this};
  int counter = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
