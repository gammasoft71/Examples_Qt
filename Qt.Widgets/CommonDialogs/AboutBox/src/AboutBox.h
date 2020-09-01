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
      buttonShowAbout.setText("About...");
      buttonShowAbout.move(10, 10);
      connect(&buttonShowAbout, &QPushButton::clicked, [&] {
        QMessageBox::about(this, "About dialog", "About dialog\n\nversion 1.0.0 (1.0)\n\nAbout dialog description.\n\nCopyright © 2020 Gammasoft.\nAll rights reserved.");
       });

      buttonShowAboutQt.setText("AboutQt...");
      buttonShowAboutQt.move(100, 10);
      connect(&buttonShowAboutQt, &QPushButton::clicked, [&] {
        QMessageBox::aboutQt(this, "About dialog");
       });

      setCentralWidget(&frame);
      setWindowTitle("About box example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton buttonShowAbout {&frame};
    QPushButton buttonShowAboutQt {&frame};
  };
}
