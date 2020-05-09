#include <QApplication>
#include "Window.h"

using namespace examples;

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
