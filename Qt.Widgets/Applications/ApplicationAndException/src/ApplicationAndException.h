#pragma once
#include <stdexcept>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      // uncomment to throw error
      //throw std::overflow_error("Creattion object error");

      generateHandledExceptionButton.setText("Generate handled exception");
      generateHandledExceptionButton.move(10, 10);
      connect(&generateHandledExceptionButton, &QPushButton::clicked, [&] {
        try {
          throw std::invalid_argument("Not a valid argument");
        } catch(const std::exception& e) {
          // do something on exception...
        }
      });

      generateExceptionButton.setText("Generate exception");
      generateExceptionButton.setAutoRepeat(true);
      generateExceptionButton.move(10, 40);
      connect(&generateExceptionButton, &QPushButton::clicked, [&] {
        throw std::invalid_argument("Not a valid argument");
      });

      generateUnknownExceptionButton.setText("Generate unknown exception");
      generateUnknownExceptionButton.setAutoRepeat(true);
      generateUnknownExceptionButton.move(10, 70);
      connect(&generateUnknownExceptionButton, &QPushButton::clicked, [&] {
        throw "throw unknown type exception";
      });

      setCentralWidget(&frame);
      setWindowTitle("Application and exception example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton generateHandledExceptionButton {&frame};
    QPushButton generateExceptionButton {&frame};
    QPushButton generateUnknownExceptionButton {&frame};
    int button1Clicked = 0;
    int button2Clicked = 0;
  };
}
