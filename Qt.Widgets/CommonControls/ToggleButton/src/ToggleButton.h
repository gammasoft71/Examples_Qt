#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      toggleButton1.setText("Checked");
      toggleButton1.move(30, 30);
      toggleButton1.resize(100, toggleButton1.height());
      toggleButton1.setCheckable(true);
      toggleButton1.setChecked(true);
      connect(&toggleButton1, &QPushButton::clicked, [&]() {
        toggleButton1.setText(toggleButton1.isChecked() ? "Checked" : "Unchecked");
       });

      toggleButton2.setText("Unhecked");
      toggleButton2.move(30, 60);
      toggleButton2.resize(100, toggleButton1.height());
      toggleButton2.setCheckable(true);
      connect(&toggleButton2, &QPushButton::clicked, [&]() {
        toggleButton2.setChecked(false);
       });

      setCentralWidget(&frame);
      setWindowTitle("Toggle button example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton toggleButton1 {&frame};
    QPushButton toggleButton2 {&frame};
  };
}
