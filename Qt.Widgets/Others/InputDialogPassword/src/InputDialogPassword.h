#pragma once
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QInputDialog>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      button1.setText("Password...");
      button1.move(10, 10);
      connect(&button1, &QPushButton::clicked, [&] {
        QInputDialog inputDialog(this);
        bool ok = false;
        auto result = QInputDialog::getText(this, "User password", "user: admin", QLineEdit::Password, label1.text(), &ok);
        if (ok) label1.setText(result);
        label1.adjustSize();
       });
      
      label1.move(10, 50);
      label1.setText("sysad47@74dasys");

      setCentralWidget(&frame);
      setWindowTitle("Input dialog password example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button1 {&frame};
    QLabel label1 {&frame};
  };
}
