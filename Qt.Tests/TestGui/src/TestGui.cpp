#include <QApplication>
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);

  QMainWindow form;
  form.resize(300, 300);
  form.setWindowTitle("Main form");
  form.show();

  QFrame frame;
  form.setCentralWidget(&frame);

  QPushButton button;
  button.move(10, 10);
  button.setParent(&frame);
  button.setText("Close");
  button.connect(&button, &QPushButton::clicked, &form, &QMainWindow::close);

  return application.exec();
}
