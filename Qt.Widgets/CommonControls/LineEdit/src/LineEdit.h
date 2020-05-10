#include <QFrame>
#include <QMainWindow>
#include <QLineEdit>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      lineEdit1.setText("line edit");
      lineEdit1.move(10, 10);
      connect(&lineEdit1, &QLineEdit::textChanged, [&] {
        if (lineEdit2.text() != lineEdit1.text())
          lineEdit2.setText(lineEdit1.text());
      });

      lineEdit2.setText("lineEdit");
      lineEdit2.move(10, 50);
      connect(&lineEdit2, &QLineEdit::textChanged, [&] {
        if (lineEdit1.text() != lineEdit2.text())
          lineEdit1.setText(lineEdit2.text());
      });

      setCentralWidget(&frame);
      setWindowTitle("Line edit example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QLineEdit lineEdit1 {&frame};
    QLineEdit lineEdit2 {&frame};
  };
}
