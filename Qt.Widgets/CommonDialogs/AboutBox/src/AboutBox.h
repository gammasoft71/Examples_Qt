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
        QMessageBox::about(this, "About AboutBox", AboutString("AboutBox", "About dialog description", "1.0.0", "Copyright © 2020 Gammasoft.\nAll rights reserved."));
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
    static QString AboutString(const QString& name, const QString& description, const QString& version, const QString& copyright) {return QString("%1\n%2\n\n%3\n%4\n%5\n%6").arg(name).arg(version).arg(QString(86, ' ')).arg(copyright).arg(description).arg(QString(86, ' '));}
    QFrame frame;
    QPushButton buttonShowAbout {&frame};
    QPushButton buttonShowAboutQt {&frame};
  };
}
