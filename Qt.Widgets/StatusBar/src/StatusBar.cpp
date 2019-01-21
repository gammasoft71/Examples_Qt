#include <QApplication>
#include <QFrame>
#include <QMainWindow>
#include <QStatusBar>

class Form : public QMainWindow {
public:
  Form() {
    QStatusBar* statusBar = this->statusBar();
    statusBar->showMessage("Status bar...");

    // workaround : On macOS Mojave dark mode, the status bar background color remains ligth...
    // todo : Remove this comment and next line when it will be fixed.
    statusBar->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(this->palette().color(QPalette::Background).red()).arg(this->palette().color(QPalette::Background).green()).arg(this->palette().color(QPalette::Background).blue()));

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("Label example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
