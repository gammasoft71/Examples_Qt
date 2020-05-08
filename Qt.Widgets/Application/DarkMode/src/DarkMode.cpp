#include <QApplication>
#include <QCheckBox>
#include <QFrame>
#include <QLabel>
#include <QListWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>

class Application : public QApplication {
public:
  Application(int &argc, char **argv) : QApplication(argc, argv) {
    enableDarkMode();
  }

private:
  void enableDarkMode() {
  #ifndef Q_OS_MACOS
    qApp->setStyle("Fusion");
    auto darkPalette = QPalette();
    auto darkColor = QColor(38, 38, 38);
    auto disabledColor = QColor(127,127,127);
    darkPalette.setColor(QPalette::Window, darkColor);
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(18,18,18));
    darkPalette.setColor(QPalette::AlternateBase, darkColor);
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Disabled, QPalette::Text, disabledColor);
    darkPalette.setColor(QPalette::Button, darkColor);
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::Disabled, QPalette::ButtonText, disabledColor);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    darkPalette.setColor(QPalette::Disabled, QPalette::HighlightedText, disabledColor);

    qApp->setPalette(darkPalette);
    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
  #endif
  }
};

class Window1 : public QMainWindow {
public:
  Window1() {
    label.move(10, 14);
    label.setText("Dark mode");

    pushButton.move(110, 10);
    pushButton.setText("Click me");

    listWidget.move(10, 50);
    listWidget.resize(120, 100);
    listWidget.addItems({"Item 1", "Item 2", "Item 3", "Item 4", "Item 5", "Item 6", "Item 7", "Item 8", "Item 9", "Item 10"});
    listWidget.setCurrentRow(0);

    radioButton1.move(10, 170);
    radioButton1.setText("Radio 1");
    radioButton1.setChecked(true);

    radioButton2.move(110, 170);
    radioButton2.setText("Radio 2");

    checkBox1.move(10, 200);
    checkBox1.setText("Check 1");
    checkBox1.setChecked(true);

    checkBox2.move(110, 200);
    checkBox2.setText("Check 2");

    setCentralWidget(&frame);
    resize(300, 300);
  }

private:
  QFrame frame;
  QLabel label {&frame};
  QPushButton pushButton {&frame};
  QListWidget listWidget {&frame};
  QRadioButton radioButton1 {&frame};
  QRadioButton radioButton2 {&frame};
  QCheckBox checkBox1 {&frame};
  QCheckBox checkBox2 {&frame};
};

int main(int argc, char *argv[]) {
  Application application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
