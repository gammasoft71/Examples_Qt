#pragma once
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QSpinBox>

namespace Examples {
  class SpinButton : public QSpinBox {
    Q_OBJECT
  public:
    SpinButton(QWidget* parent = nullptr) : QSpinBox(parent) {
      // Hack of QSpinBox (child[0] : line-edit and child[1] validator...) : remove focus , hide line-edit (child 0) and resize without line-edit width.
      setFocusPolicy(Qt::FocusPolicy::NoFocus);
      auto lineEdit = dynamic_cast<QWidget*>(children().at(0));
      if (lineEdit) {
        lineEdit->hide();
        resize(width() - lineEdit->width(), height());
      }
    }
  };

  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
     Window1() {
      spinButton.move(10, 10);
      spinButton.setRange(10, 20);
      spinButton.setValue(15);
      spinButton.setWrapping(true);
      connect(&spinButton, QOverload<int>::of(&SpinButton::valueChanged), [&] {
        label.setText(QString("value = %1").arg(spinButton.value()));
        label.resize(label.sizeHint());
      });

      label.move(10, 50);
      label.setText("value = 15");

      setCentralWidget(&frame);
      setWindowTitle("Spin button example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    SpinButton spinButton{&frame};
    QLabel label {&frame};
  };
}
