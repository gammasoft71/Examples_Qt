#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  QMainWindow window1;
  window1.show();
  return application.exec();
}
