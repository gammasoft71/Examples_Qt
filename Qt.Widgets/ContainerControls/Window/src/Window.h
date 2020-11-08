#pragma once
#include <QApplication>
#include <QCloseEvent>
#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      buttonClose.setText("Close");
      buttonClose.move(10, 10);
      connect(&buttonClose, &QPushButton::clicked, this, &Window1::close);

      buttonExit.setText("Exit");
      buttonExit.move(100, 10);
      connect(&buttonExit, &QPushButton::clicked, &QApplication::exit);

      buttonQuit.setText("Quit");
      buttonQuit.move(190, 10);
      connect(&buttonQuit, &QPushButton::clicked, &QApplication::quit);

      setCentralWidget(&frame);
      setWindowTitle("Window");
      resize(640, 480);
    }

    void closeEvent(QCloseEvent *event) override {
      event->ignore();
      if (QMessageBox::question(this, "Close Window", "Are you sure you want exit?", QMessageBox::StandardButton::Yes|QMessageBox::StandardButton::No) == QMessageBox::StandardButton::Yes)
        QMainWindow::closeEvent(event);
    }

  private:
    QFrame frame;
    QPushButton buttonClose {&frame};
    QPushButton buttonExit {&frame};
    QPushButton buttonQuit {&frame};
  };
}
