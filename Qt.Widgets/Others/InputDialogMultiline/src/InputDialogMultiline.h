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
      button1.setText("Text...");
      button1.move(10, 10);
      connect(&button1, &QPushButton::clicked, [&] {
        QInputDialog inputDialog(this);
        bool ok = false;
        auto result = QInputDialog::getMultiLineText(this, "Caption text", "Message text", label1.text(), &ok);
        if (ok) label1.setText(result);
        label1.adjustSize();
       });
      
      label1.move(10, 50);
      label1.setText("line 1\nline 2");

      setCentralWidget(&frame);
      setWindowTitle("Input dialog multiline example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button1 {&frame};
    QLabel label1 {&frame};
  };
}
