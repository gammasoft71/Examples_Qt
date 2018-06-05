#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  QMainWindow form;
  form.show();
  return application.exec();
}
