#pragma once
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      buttonShowMessage.setText("Message...");
      buttonShowMessage.move(10, 10);
      connect(&buttonShowMessage, &QPushButton::clicked, [&] {
        QMessageBox::StandardButton result = QMessageBox::information(this, "Message", "Hello, World!", QMessageBox::StandardButton::Ok|QMessageBox::StandardButton::Cancel);
        labelStandardButton.setText(QString("StandardButton = %1").arg(result == QMessageBox::StandardButton::Ok ? "QMessageBox::Ok" : "QMessageBox::Cancel"));
        labelStandardButton.resize(labelStandardButton.sizeHint());
       });

      labelStandardButton.move(10, 50);

      setCentralWidget(&frame);
      setWindowTitle("Message box example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton buttonShowMessage {&frame};
    QLabel labelStandardButton {&frame};
  };
}
