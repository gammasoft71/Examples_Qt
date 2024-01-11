#include <QApplication>
#include <QFrame>
#include <QLineEdit>
#include <QMainWindow>

namespace Examples {
  class ColoredLine : public QFrame {
    Q_OBJECT
  public:
    ColoredLine(QWidget* parent = nullptr) : QFrame(parent) {setAutoFillBackground(true);}

    QColor color() const {return palette().color(QPalette::Window);}
    void setColor(const QColor& color) {return setPalette(color);}
  };

  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      lineSeparator.setGeometry(10, 10, 280, 2);
      lineSeparator.setColor(qApp->palette().color(QPalette::Base));

      lineRed.setGeometry(10, 20, 2, 250);
      lineRed.setColor(Qt::GlobalColor::red);

      lineGreen.setGeometry(149, 20, 2, 250);
      lineGreen.setColor(Qt::GlobalColor::darkGreen);

      lineBlue.setGeometry(288, 20, 2, 250);
      lineBlue.setColor(Qt::GlobalColor::blue);

      lineSeparator2.setGeometry(10, 278, 280, 2);
      lineSeparator2.setColor(qApp->palette().color(QPalette::Text));

      setCentralWidget(&frame);
      setWindowTitle("Lines example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    ColoredLine lineSeparator{&frame};
    ColoredLine lineRed{&frame};
    ColoredLine lineGreen{&frame};
    ColoredLine lineBlue{&frame};
    ColoredLine lineSeparator2{&frame};
  };
}
