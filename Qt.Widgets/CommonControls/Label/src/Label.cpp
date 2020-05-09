#include <QApplication>
#include "Label.h"

using namespace examples;

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
