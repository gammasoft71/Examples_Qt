#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSlider>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->trackBar.setOrientation(Qt::Horizontal);
    this->trackBar.setMaximum(200);
    this->trackBar.setValue(100);
    this->trackBar.move(20, 50);
    this->trackBar.resize(200, 25);
    this->connect(&this->trackBar, &QSlider::valueChanged, [&]() {
      this->progressBar.setValue(this->trackBar.value());
      this->label.setText(QString("%1").arg(this->trackBar.value()));
    });

    this->progressBar.setMaximum(200);
    this->progressBar.move(20, 100);
    this->progressBar.resize(200, 25);
    this->progressBar.setValue(this->trackBar.value());

    this->label.setText(QString("%1").arg(this->trackBar.value()));
    this->label.move(20, 150);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("TrackBar example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QSlider trackBar {&this->centralWidget};
  QProgressBar progressBar {&this->centralWidget};
  QLabel label {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
