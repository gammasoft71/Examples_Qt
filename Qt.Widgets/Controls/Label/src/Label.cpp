#include <QApplication>
#include "Label.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  auto application = QApplication {argc, argv};
  auto window1 = Window1 {};
  window1.show();
  return application.exec();
}
