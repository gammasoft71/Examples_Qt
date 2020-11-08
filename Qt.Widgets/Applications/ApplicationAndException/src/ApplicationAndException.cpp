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
      QMessageBox::critical(nullptr, "Exception occured", QString("Message: %1").arg(e.what()), QMessageBox::StandardButton::Ok);
    } catch(...) {
      QMessageBox::critical(nullptr, "Unknown exception occured", "Message: (none)", QMessageBox::StandardButton::Ok);
    }
   QApplication::quit(); // Rermove or comment this line to continue
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
    qDebug() << "Exception occured";
    qDebug() << QString("Message: %1").arg(e.what());
  } catch(...) {
    qDebug() << "Unknown exception occured";
    qDebug() << "Message: (%1)none)";
  }
}

