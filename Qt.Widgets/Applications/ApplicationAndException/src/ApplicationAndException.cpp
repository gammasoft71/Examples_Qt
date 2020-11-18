#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include "ApplicationAndException.h"

using namespace Examples;

class Application : public QApplication {
public:
  Application(int &argc, char **argv, int = ApplicationFlags) : QApplication(argc, argv) {}
    bool notify(QObject* object, QEvent* event) override {
    try {
      return QApplication::notify(object, event);
    } catch(const std::exception& e) {
      if (QMessageBox::critical(nullptr, "Exception occured", QString("Unhandled exception occured in your application. If you click OK, the application will ignore this error and attempt to continue. If you click Cancel, the application will close immediately.\n\n%1").arg(e.what()), QMessageBox::StandardButton::Ok|QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Cancel)
        QApplication::quit();
    } catch(...) {
      if (QMessageBox::critical(nullptr, "Unknown exception occured", "Unhandled exception occured in your application. If you click OK, the application will ignore this error and attempt to continue. If you click Cancel, the application will close immediately.\n\n(Unknown exception)", QMessageBox::StandardButton::Ok|QMessageBox::StandardButton::Cancel) == QMessageBox::StandardButton::Cancel)
        QApplication::quit();
    }
   return true;
  }
};

int main(int argc, char *argv[]) {
  try {
    Application application(argc, argv);
    Window1 window1;
    window1.show();
    return application.exec();
  } catch(const std::exception& e) {
    qDebug() << QString("Exception: %1").arg(e.what());
  } catch(...) {
    qDebug() << "Unknown exception occured";
  }
}

