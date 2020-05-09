#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QDoubleSpinBox>

class Window1 : public QMainWindow {
  Q_OBJECT
public:
   Window1() {
    doubleSpinBox.move(80, 50);
    doubleSpinBox.setRange(10.0, 11.0);
    doubleSpinBox.setDecimals(2);
    doubleSpinBox.setSingleStep(0.01);
    connect(&doubleSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged), [&] {
      label.setText(QString("value = %1").arg(QString::number(doubleSpinBox.value(), 'f', 2)));
    });

    label.move(80, 100);
    label.setText("value = 10.00");

    setCentralWidget(&frame);
    setWindowTitle("Spin box example");
    resize(300, 300);
  }

private:
  QFrame frame;
  QDoubleSpinBox doubleSpinBox {&frame};
  QLabel label {&frame};
};
