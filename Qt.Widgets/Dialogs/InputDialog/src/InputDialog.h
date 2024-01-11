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
        inputDialog.setWindowTitle("Caption text");
        inputDialog.setLabelText("Message text");
        inputDialog.setTextValue(label1.text());
        QDialog::DialogCode dialogCode = static_cast<QDialog::DialogCode>(inputDialog.exec());
        if (dialogCode == QDialog::Accepted)
          label1.setText(inputDialog.textValue());
       });
      
      label1.move(10, 50);
      label1.setText("Default value");

      setCentralWidget(&frame);
      setWindowTitle("Input dialog example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button1 {&frame};
    QLabel label1 {&frame};
  };
}
