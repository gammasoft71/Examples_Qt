#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QProgressBar>
#include <QTimer>

class Form : public QMainWindow {
public:
  Form() {
    this->progressBar1.move(50, 50);
    this->progressBar1.resize(200, 25);
    this->progressBar1.setTextVisible(false);

    this->progressBar2.move(50, 80);
    this->progressBar2.resize(200, 25);
    this->progressBar2.setValue(50);
    this->progressBar2.setTextVisible(false);

    this->progressBar3.move(50, 110);
    this->progressBar3.resize(200, 25);
    this->progressBar3.setMaximum(300);
    this->progressBar3.setValue(300);
    this->progressBar3.setTextVisible(false);

    this->progressBar4.move(50, 140);
    this->progressBar4.resize(200, 25);
    this->progressBar4.setMaximum(140);
    this->progressBar4.setTextVisible(false);

    this->progressBar5.move(50, 170);
    this->progressBar5.resize(200, 25);
    this->progressBar5.setMinimum(0);
    this->progressBar5.setMaximum(0);
    this->progressBar5.setTextVisible(false);

    this->timer.setInterval(50);
    this->connect(&this->timer, &QTimer::timeout, [&]() {
      this->progressBar4.setValue(this->progressBar4.value() < this->progressBar4.maximum() ? this->progressBar4.value() + 1 : this->progressBar4.minimum());
    });
    this->timer.start();

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("ProgressBar example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QProgressBar progressBar1 {&this->panel};
  QProgressBar progressBar2 {&this->panel};
  QProgressBar progressBar3 {&this->panel};
  QProgressBar progressBar4 {&this->panel};
  QProgressBar progressBar5 {&this->panel};
  QTimer timer {this};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
