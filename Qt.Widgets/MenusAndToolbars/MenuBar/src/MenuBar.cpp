#include <QApplication>
#include <QIcon>
#include <QStringList>
#include "MenuBar.h"

using namespace Examples;

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
#if defined(Q_OS_MACOS)
  QIcon::setThemeSearchPaths(QStringList {":macos-icon-theme"});
  QIcon::setThemeName("macos-icon-theme");
#elif defined(Q_OS_WINDOWS)
  QIcon::setThemeSearchPaths(QStringList {":windows-icon-theme"});
  QIcon::setThemeName("windows-icon-theme");
#endif
  Window1 window1;
  window1.show();
  return application.exec();
}
