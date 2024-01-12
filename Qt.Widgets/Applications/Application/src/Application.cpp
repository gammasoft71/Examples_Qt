#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
  auto application = QApplication {argc, argv};
  auto window1 = QMainWindow {};
  window1.show();
  return application.exec();
}
