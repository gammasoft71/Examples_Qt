#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
  auto application = QApplication {argc, argv};
  QMainWindow window1;
  window1.show();
  return application.exec();
}
