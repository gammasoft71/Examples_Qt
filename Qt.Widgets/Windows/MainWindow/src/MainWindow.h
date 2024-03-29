#pragma once
#include <QApplication>
#include <QCloseEvent>
#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace Examples {
  class MainWindow1 : public QMainWindow {
    Q_OBJECT
  public:
    MainWindow1() {
      buttonClose.setText("Close");
      buttonClose.move(10, 10);
      connect(&buttonClose, &QPushButton::clicked, this, &MainWindow1::close);

      buttonQuit.setText("Quit");
      buttonQuit.move(100, 10);
      connect(&buttonQuit, &QPushButton::clicked, &QApplication::quit);

      buttonExit.setText("Exit");
      buttonExit.move(190, 10);
      connect(&buttonExit, &QPushButton::clicked, &QApplication::exit);

      setCentralWidget(&frame);
      setWindowTitle("MainWindow");
      resize(640, 480);
    }

  protected:
    void closeEvent(QCloseEvent *event) override {
      event->setAccepted(QMessageBox::question(this, "Close MainWindow", "Are you sure you want exit?", QMessageBox::StandardButton::Yes|QMessageBox::StandardButton::No) == QMessageBox::StandardButton::Yes);
    }

  private:
    QFrame frame;
    QPushButton buttonClose {&frame};
    QPushButton buttonQuit {&frame};
    QPushButton buttonExit {&frame};
  };
}
