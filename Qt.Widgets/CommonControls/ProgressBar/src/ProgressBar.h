#include <QFrame>
#include <QMainWindow>
#include <QProgressBar>
#include <QTimer>

class Window1 : public QMainWindow {
  Q_OBJECT
public:
  Window1() {
    progressBar1.move(50, 50);
    progressBar1.resize(200, 25);
    progressBar1.setTextVisible(false);

    progressBar2.move(50, 80);
    progressBar2.resize(200, 25);
    progressBar2.setValue(50);
    progressBar2.setTextVisible(false);

    progressBar3.move(50, 110);
    progressBar3.resize(200, 25);
    progressBar3.setMaximum(300);
    progressBar3.setValue(300);
    progressBar3.setTextVisible(false);

    progressBar4.move(50, 140);
    progressBar4.resize(200, 25);
    progressBar4.setMaximum(140);
    progressBar4.setTextVisible(false);

    progressBar5.move(50, 170);
    progressBar5.resize(200, 25);
    progressBar5.setMinimum(0);
    progressBar5.setMaximum(0);
    progressBar5.setTextVisible(false);

    timer.setInterval(50);
    connect(&timer, &QTimer::timeout, [&]() {
      progressBar4.setValue(progressBar4.value() < progressBar4.maximum() ? progressBar4.value() + 1 : progressBar4.minimum());
    });
    timer.start();

    setCentralWidget(&frame);
    setWindowTitle("Progress bar example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QProgressBar progressBar1 {&frame};
  QProgressBar progressBar2 {&frame};
  QProgressBar progressBar3 {&frame};
  QProgressBar progressBar4 {&frame};
  QProgressBar progressBar5 {&frame};
  QTimer timer {this};
};
