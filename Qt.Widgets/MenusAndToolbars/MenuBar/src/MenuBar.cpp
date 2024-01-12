#include <QApplication>
#include <QIcon>
#include <QStringList>
#include "MenuBar.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  auto application = QApplication {argc, argv};
#if defined(Q_OS_MACOS)
  QIcon::setThemeSearchPaths(QStringList {":macos-icon-theme"});
  QIcon::setThemeName("macos-icon-theme");
#elif defined(Q_OS_WINDOWS)
  QIcon::setThemeSearchPaths(QStringList {":windows-icon-theme"});
  QIcon::setThemeName("windows-icon-theme");
#endif
  auto window1 = Window1 {};
  window1.show();
  return application.exec();
}
