#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      buttonClickMe.setText("Click me");
      buttonClickMe.move(10, 10);
      connect(&buttonClickMe, &QPushButton::clicked, [&]() {
        QMessageBox(QMessageBox::Icon::NoIcon, "", "Hello, World!").exec();
       });

      setCentralWidget(&frame);
      setWindowTitle("Hello world (Message box)");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton buttonClickMe {&frame};
  };
}
