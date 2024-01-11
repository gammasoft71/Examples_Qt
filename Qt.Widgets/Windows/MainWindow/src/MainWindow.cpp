#include <QApplication>
#include "MainWindow.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  MainWindow1 mainWindow1;
  mainWindow1.show();
  return application.exec();
}
