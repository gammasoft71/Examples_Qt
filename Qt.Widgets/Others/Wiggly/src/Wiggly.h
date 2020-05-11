#pragma once
#include <QBasicTimer>
#include <QFrame>
#include <QLineEdit>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QVBoxLayout>

namespace Examples {
  class WigglyWidget : public QWidget {
    Q_OBJECT
  public:
    WigglyWidget(QWidget *parent = nullptr) : QWidget(parent) {
      setBackgroundRole(QPalette::Midlight);
      setAutoFillBackground(true);

      auto newFont = font();
      newFont.setPointSize(newFont.pointSize() + 20);
      setFont(newFont);

      timer.start(60, this);
    }

public slots:
    void setText(const QString &newText) {text = newText;}

protected:
    void paintEvent(QPaintEvent* event) override {
      static const std::vector sins = {0, 38, 71, 92, 100, 92, 71, 38, 0, -38, -71, -92, -100, -92, -71, -38};
      QFontMetrics metrics(font());
      auto pos = QPoint {(event->rect().width() - metrics.horizontalAdvance(text)) / 2, (event->rect().height() + metrics.ascent() - metrics.descent()) / 2};
      QPainter painter(this);
      for (auto i = 0; i < text.size(); ++i) {
        auto index = (step + i) % sins.size();
        painter.setPen(QColor::fromHsv(360.0f / sins.size() * index, 255, 191));
        painter.drawText(pos - QPoint {0, (sins[index] * metrics.height()) / 400},  QString(text[i]));
        pos.setX(pos.x() + metrics.horizontalAdvance(text[i]));
      }
    }

    void timerEvent(QTimerEvent* event) override {
      if (event->timerId() == timer.timerId()) {
        ++step;
        update();
      } else
        QWidget::timerEvent(event);
    }

private:
    QBasicTimer timer;
    QString text;
    int step = 0;
  };

  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      setCentralWidget(&frame);
      setWindowTitle("Wiggly");
      resize(330, 130);
      connect(&lineEdit, &QLineEdit::textChanged, &wigglyWidget, &WigglyWidget::setText);

      wigglyWidget.setGeometry(20, 20, 290, 60);

      layout.addWidget(&wigglyWidget);
      layout.addWidget(&lineEdit);
      lineEdit.move(20, 90);
      lineEdit.setGeometry(20, 90, 290, lineEdit.height());
      lineEdit.setText("Habemus papam");
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    WigglyWidget wigglyWidget;
    QLineEdit lineEdit;
  };
}
