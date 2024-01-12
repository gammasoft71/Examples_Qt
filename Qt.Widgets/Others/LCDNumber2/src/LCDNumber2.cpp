#include <QApplication>
#include "LCDNumber2.h"

int main(int argc, char *argv[]) {
  auto application = QApplication {argc, argv};
  auto window1 = Window1 {};
  window1.show();
  return application.exec();
}
