#include <QFrame>
#include <QMainWindow>
#include <QRadioButton>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      radioButton1.setText("Radio 1");
      radioButton1.move(30, 30);
      radioButton1.setChecked(true);

      radioButton2.setText("Radio 2");
      radioButton2.move(30, 60);

      radioButton3.setText("Radio 3");
      radioButton3.move(30, 90);

      setCentralWidget(&frame);
      setWindowTitle("Radio button example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QRadioButton radioButton1 {&frame};
    QRadioButton radioButton2 {&frame};
    QRadioButton radioButton3 {&frame};
  };
}
