#include <QApplication>
#include "Wiggly.h"

auto main(int argc, char *argv[]) -> int {
  auto application = QApplication {argc, argv};
  auto window1 = WigglyExamples::Window1 {};
  window1.show();
  return application.exec();
}
