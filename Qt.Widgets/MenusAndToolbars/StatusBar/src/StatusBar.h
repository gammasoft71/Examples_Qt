#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QStatusBar>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      QStatusBar* statusBar = this->statusBar();
      statusBar->showMessage("Status bar...");

      setCentralWidget(&frame);
      setWindowTitle("Status bar example");
      resize(300, 300);
    }

  private:
    QFrame frame;
  };
}
