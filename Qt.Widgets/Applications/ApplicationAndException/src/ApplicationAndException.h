#pragma once
#include <stdexcept>
#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
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
          throw std::invalid_argument("Exception handled generated");
        } catch(const std::exception& e) {
          QMessageBox::information(this, "Exception handled", e.what());
        }
      });

      generateExceptionButton.setText("Generate exception");
      generateExceptionButton.move(10, 40);
      connect(&generateExceptionButton, &QPushButton::clicked, [&] {
        throw std::invalid_argument("Exception generated");
      });

      generateUnknownExceptionButton.setText("Generate unknown exception");
      generateUnknownExceptionButton.move(10, 70);
      connect(&generateUnknownExceptionButton, &QPushButton::clicked, [&] {
        throw "Unknown exception generated";
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
