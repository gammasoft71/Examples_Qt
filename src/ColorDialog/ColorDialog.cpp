#include <QApplication>
#include <QColorDialog>
#include <QMainWindow>
#include <QPushButton>

class Form : public QMainWindow {
public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->button.setText("Color...");
    this->button.move(10, 10);
    this->connect(&this->button, &QPushButton::clicked, [&]() {
      QColorDialog colorDialog;
      colorDialog.setCurrentColor(this->palette().color(QPalette::Background));
      if (colorDialog.exec() == QDialog::Accepted) {
        QPalette palette;
        palette.setColor(QPalette::Background, colorDialog.selectedColor());
        this->setPalette(palette);
        this->update();
      }
    });

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("ColorDialog example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QPushButton button {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
