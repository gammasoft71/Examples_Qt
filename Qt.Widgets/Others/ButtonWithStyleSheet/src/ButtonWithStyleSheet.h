#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
     Window1() {
      button1.setText("Click me");
      button1.move(10, 10);
      button1.resize(75, 25);
      button1.setStyleSheet(buttonStyleSheets);

      setCentralWidget(&frame);
      setWindowTitle("Button with style sheet example");
      resize(300, 300);
    }

  private:
     QString buttonStyleSheets =
         "QPushButton {\n"
         "  background-color: #666666;\n"
         "  margin: 2px 1px 0px 1px;\n"
         "  border-style: Solid;\n"
         "  border-width: 1px;\n"
         "  border-color: #666666;\n"
         "  border-radius: 6px 6px;\n"
         "}\n"
         "QPushButton:pressed {\n"
         "  background-color: #007AFF;\n"
         "color: #FFFFFF;\n"
         "}\n"
         ;

    QFrame frame;
    QPushButton button1 {&frame};
  };
}
