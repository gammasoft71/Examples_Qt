#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>

class Window1 : public QMainWindow {
public:
  Window1() {
    trackBar.setOrientation(Qt::Horizontal);
    trackBar.setMaximum(200);
    trackBar.setValue(100);
    trackBar.move(20, 50);
    trackBar.resize(200, 25);
    connect(&trackBar, &QSlider::valueChanged, [&]() {
      progressBar.setValue(trackBar.value());
      label.setText(QString("%1").arg(trackBar.value()));
    });

    progressBar.setMaximum(200);
    progressBar.move(20, 100);
    progressBar.resize(200, 25);
    progressBar.setValue(trackBar.value());
    progressBar.setTextVisible(false);

    label.setText(QString("%1").arg(trackBar.value()));
    label.move(20, 150);

    setCentralWidget(&panel);
    setWindowTitle("TrackBar example");
    resize(300, 300);
  }

private:
  QFrame panel;
  QSlider trackBar {&panel};
  QProgressBar progressBar {&panel};
  QLabel label {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
