#include <QApplication>
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>
#include <QComboBox>>

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);

  QMainWindow form;
  form.resize(300, 300);
  form.setWindowTitle("Main form");
  form.show();

  QFrame frame;
  form.setCentralWidget(&frame);

  /*
  QPushButton closeButton;
  closeButton.move(10, 10);
  closeButton.setParent(&frame);
  closeButton.setText("Close");
  closeButton.connect(&closeButton, &QPushButton::clicked, &form, &QMainWindow::close);

  QMainWindow dialog;
  dialog.resize(350, 100);
  dialog.setWindowTitle("dialog");

  QPushButton showButton;
  showButton.move(10, 40);
  showButton.setParent(&frame);
  showButton.setText("Show");
  showButton.connect(&showButton, &QPushButton::clicked, &form, [&]{
    dialog.show();
  });

  QPushButton hideButton;
  hideButton.move(10, 70);
  hideButton.setParent(&frame);
  hideButton.setText("Hide");
  hideButton.connect(&hideButton, &QPushButton::clicked, &form, [&]{
    dialog.hide();
  });
  */

  QComboBox comboBox;
  comboBox.move(10, 10);
  comboBox.setParent(&frame);
  //comboBox.setEditable(true);
  comboBox.addItems({"red", "green", "blue", "yellow", "magenta", "cyan", "white", "black", "redorange", "teal", "aqua", "dodger"});


  return application.exec();
}
