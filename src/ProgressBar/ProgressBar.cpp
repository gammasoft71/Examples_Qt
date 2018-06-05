#include <QApplication>
#include <QMainWindow>
#include <QProgressBar>
#include <QTimer>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->progressBar1.move(50, 50);
    this->progressBar1.resize(200, 25);

    this->progressBar2.move(50, 80);
    this->progressBar2.resize(200, 25);
    this->progressBar2.setValue(50);

    this->progressBar3.move(50, 110);
    this->progressBar3.resize(200, 25);
    this->progressBar3.setMaximum(300);
    this->progressBar3.setValue(300);

    this->progressBar4.move(50, 140);
    this->progressBar4.resize(200, 25);
    this->progressBar4.setMaximum(140);

    this->progressBar5.move(50, 170);
    this->progressBar5.resize(200, 25);
    this->progressBar5.setMinimum(0);
    this->progressBar5.setMaximum(0);

    this->timer.setInterval(50);
    this->connect(&this->timer, &QTimer::timeout, [&]() {
      this->progressBar4.setValue(this->progressBar4.value() < this->progressBar4.maximum() ? this->progressBar4.value() + 1 : this->progressBar4.minimum());
    });
    this->timer.start();

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("Timer example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QProgressBar progressBar1 {&this->centralWidget};
  QProgressBar progressBar2 {&this->centralWidget};
  QProgressBar progressBar3 {&this->centralWidget};
  QProgressBar progressBar4 {&this->centralWidget};
  QProgressBar progressBar5 {&this->centralWidget};
  QTimer timer {this};
  int counter = 0;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
