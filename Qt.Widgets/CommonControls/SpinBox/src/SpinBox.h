#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QSpinBox>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
     Window1() {
      spinBox.move(80, 50);
      spinBox.setRange(0, 100);
      spinBox.setValue(50);
      connect(&spinBox, QOverload<int>::of(&QSpinBox::valueChanged), [&] {
        label.setText(QString("value = %1").arg(spinBox.value()));
      });

      label.move(80, 100);
      label.setText("value = 50");

      setCentralWidget(&frame);
      setWindowTitle("Spin box example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QSpinBox spinBox {&frame};
    QLabel label {&frame};
  };
}
