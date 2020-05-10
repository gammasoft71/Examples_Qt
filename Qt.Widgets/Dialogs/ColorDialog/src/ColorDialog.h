#include <QColorDialog>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

namespace Examples {
  class Window1 : public QMainWindow {
  public:
    Window1() {
      button.setText("Color...");
      button.move(10, 10);
      connect(&button, &QPushButton::clicked, [&]() {
        QColorDialog colorDialog;
        colorDialog.setCurrentColor(palette().color(QPalette::Window));
        if (colorDialog.exec() == QDialog::Accepted) {
          QPalette palette;
          palette.setColor(QPalette::Window, colorDialog.selectedColor());
          setPalette(palette);
        }
      });

      setCentralWidget(&frame);
      setWindowTitle("ColorDialog example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button {&frame};
  };
}
