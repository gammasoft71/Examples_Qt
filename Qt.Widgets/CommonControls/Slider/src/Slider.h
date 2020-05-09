#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      slider.setOrientation(Qt::Vertical);
      slider.setMaximum(200);
      slider.setValue(100);
      slider.move(20, 50);
      slider.resize(25, 200);
      connect(&slider, &QSlider::valueChanged, [&]() {
        progressBar.setValue(slider.value());
        label.setText(QString("%1").arg(slider.value()));
      });

      progressBar.setOrientation(Qt::Vertical);
      progressBar.setMaximum(200);
      progressBar.move(80, 50);
      progressBar.resize(25, 200);
      progressBar.setValue(slider.value());
      progressBar.setTextVisible(false);

      label.setText(QString("%1").arg(slider.value()));
      label.move(150, 50);

      setCentralWidget(&frame);
      setWindowTitle("Slider example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QSlider slider {&frame};
    QProgressBar progressBar {&frame};
    QLabel label {&frame};
  };
}
