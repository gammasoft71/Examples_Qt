#include <QApplication>
#include <QColorDialog>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

class Window1 : public QMainWindow {
public:
  Window1() {
    button.setText("Color...");
    button.move(10, 10);
    connect(&button, &QPushButton::clicked, [&]() {
      QColorDialog colorDialog;
      colorDialog.setCurrentColor(palette().color(QPalette::Background));
      if (colorDialog.exec() == QDialog::Accepted) {
        QPalette palette;
        palette.setColor(QPalette::Background, colorDialog.selectedColor());
        setPalette(palette);
        update();
      }
    });

    setCentralWidget(&panel);
    setWindowTitle("ColorDialog example");
    resize(300, 300);
  }

private:
  QFrame panel;
  QPushButton button {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
