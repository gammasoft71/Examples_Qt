#include "DarkMode.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  Application application(argc, argv);
  auto window1 = Window1 {};
  window1.show();
  return application.exec();
}
