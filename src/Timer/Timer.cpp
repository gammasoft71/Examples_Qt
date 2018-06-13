#include <QApplication>
#include <QFont>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QTimer>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->label.setText(QString("%1").number((float)(this->counter) / 10, 'f', 1));
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
      this->label.setText(QString("%1").number((float)(++this->counter) / 10, 'f', 1));
    });

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Timer example");
    this->resize(230, 130);
  }

private:
  QWidget centralWidget;
  QLabel label {&this->centralWidget};
  QPushButton button {&this->centralWidget};
  QTimer timer {this};
  int counter = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
