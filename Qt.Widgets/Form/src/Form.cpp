#include <QApplication>
#include <QCloseEvent>
#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

class Window1 : public QMainWindow {
public:
  Window1() {
    button.setText("Close");
    button.move(10, 10);
    connect(&button, &QPushButton::clicked, [&]() {
      close();
     });

    setCentralWidget(&panel);
    setWindowTitle("Form");
    resize(640, 480);
  }

  void closeEvent(QCloseEvent *event) override {
    event->ignore();
    if (QMessageBox::question(this, "Close Form", "Are you sure you want exit?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
      QMainWindow::closeEvent(event);
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
