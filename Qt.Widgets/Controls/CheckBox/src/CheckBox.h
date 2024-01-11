#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QCheckBox>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      checkBox1.setText("Always unchecked");
      checkBox1.move(30, 30);
      checkBox1.setCheckState(Qt::CheckState::Unchecked);
      connect(&checkBox1, &QCheckBox::stateChanged, [&] {
        checkBox1.setCheckState(Qt::CheckState::Unchecked);
      });

      checkBox2.setText("Checked");
      checkBox2.move(30, 60);
       checkBox2.setCheckState(Qt::CheckState::Checked);
      connect(&checkBox2, &QCheckBox::stateChanged, [&] {
        checkBox2.setText(toString(checkBox2.checkState()));
        checkBox2.resize(checkBox2.sizeHint());
      });

      checkBox3.setText("Unhecked");
      checkBox3.move(30, 90);
      checkBox3.setCheckState(Qt::CheckState::Unchecked);
      connect(&checkBox3, &QCheckBox::stateChanged, [&] {
        checkBox3.setText(toString(checkBox3.checkState()));
        checkBox3.resize(checkBox3.sizeHint());
      });

      checkBox4.setText("PartiallyChecked");
      checkBox4.move(30, 120);
      checkBox4.setTristate(true);
      checkBox4.setCheckState(Qt::CheckState::PartiallyChecked);
      connect(&checkBox4, &QCheckBox::stateChanged, [&] {
        checkBox4.setText(toString(checkBox4.checkState()));
        checkBox4.resize(checkBox4.sizeHint());
      });

      setCentralWidget(&frame);
      setWindowTitle("Check box example");
      resize(300, 300);
    }

  private:
    static QString toString(Qt::CheckState checkState) {
      switch (checkState) {
      case Qt::CheckState::Checked: return "Checked";
      case Qt::CheckState::Unchecked: return "Unchecked";
      case Qt::CheckState::PartiallyChecked: return "PartiallyChecked";
      default: return "(unknown)";
      }
    }

    QFrame frame;
    QCheckBox checkBox1 {&frame};
    QCheckBox checkBox2 {&frame};
    QCheckBox checkBox3 {&frame};
    QCheckBox checkBox4 {&frame};
   };
}
