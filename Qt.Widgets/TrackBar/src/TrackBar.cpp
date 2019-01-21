#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>

class Form : public QMainWindow {
public:
  Form() {
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
    this->progressBar.setTextVisible(false);

    this->label.setText(QString("%1").arg(this->trackBar.value()));
    this->label.move(20, 150);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("TrackBar example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QSlider trackBar {&this->panel};
  QProgressBar progressBar {&this->panel};
  QLabel label {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
