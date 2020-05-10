#include <QApplication>
#include "CheckedListWidget.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
