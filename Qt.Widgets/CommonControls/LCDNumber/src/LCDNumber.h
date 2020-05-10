#include <QFont>
#include <QFrame>
#include <QLCDNumber>
#include <QMainWindow>
#include <QDoubleSpinBox>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      doubleSpinBox.move(10, 10);
      doubleSpinBox.setDecimals(2);
      doubleSpinBox.setRange(0, 15000000);
      doubleSpinBox.setSingleStep(0.01);
      doubleSpinBox.setValue(12345678.90);
      connect(&doubleSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged), [&] {
        lcdNumber.display(QString::number(doubleSpinBox.value(), 'f', 2));
      });

      lcdNumber.setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
      lcdNumber.setDigitCount(11);
      lcdNumber.display("12345678.90");
      lcdNumber.move(10, 50);
      lcdNumber.setFrameStyle(QFrame::NoFrame);

      setCentralWidget(&frame);
      setWindowTitle("LCD number example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QDoubleSpinBox doubleSpinBox {&frame};
    QLCDNumber lcdNumber {&frame};
  };
}
