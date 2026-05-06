#pragma once
#include <QBasicTimer>
#include <QFrame>
#include <QLineEdit>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QTextBoundaryFinder>
#include <QVBoxLayout>

namespace WigglyExamples {
  class Wiggly : public QWidget {
    Q_OBJECT
  public:
    Wiggly(QWidget *parent = nullptr) : QWidget(parent) {
      setBackgroundRole(QPalette::Midlight);
      setAutoFillBackground(true);

      auto newFont = font();
      newFont.setPointSize(newFont.pointSize() + 20);
      setFont(newFont);

      timer.start(60, this);
    }

public slots:
    auto setText(const QString &newText) -> void {text = newText;}

protected:
    auto paintEvent(QPaintEvent* event) -> void override {
      static constexpr auto sins = std::array {0, 38, 71, 92, 100, 92, 71, 38, 0, -38, -71, -92, -100, -92, -71, -38};
      auto metrics = QFontMetrics {font()};
      auto pos = QPoint {(event->rect().width() - metrics.horizontalAdvance(text)) / 2, (event->rect().height() + metrics.ascent() - metrics.descent()) / 2};
      auto painter = QPainter {this};
      auto finder = QTextBoundaryFinder {QTextBoundaryFinder::Grapheme, text};
      for (auto index = 0z, next = 0z, grapheme_pos = 0z; grapheme_pos < text.length(); grapheme_pos = next) {
        auto sins_index = (step + index++) % sins.size();
        painter.setPen(QColor::fromHsv(360.0f / sins.size() * sins_index, 255, 191));
        next = finder.toNextBoundary();
        auto grapheme = text.mid(grapheme_pos, next - grapheme_pos);
        painter.drawText(pos - QPoint {0, (sins[sins_index] * metrics.height()) / 400}, grapheme);
        pos.setX(pos.x() + metrics.horizontalAdvance(grapheme));
      }
    }

    void timerEvent(QTimerEvent* event) override {
      if (event->timerId() != timer.timerId()) QWidget::timerEvent(event);
      else {
        ++step;
        update();
      }
    }

private:
    QBasicTimer timer;
    QString text;
    std::size_t step = 0z;
  };

  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      setCentralWidget(&frame);
      setWindowTitle("Wiggly");
      resize(330, 130);
      connect(&lineEdit, &QLineEdit::textChanged, &wiggly, &Wiggly::setText);

      wiggly.setGeometry(20, 20, 290, 60);

      layout.addWidget(&wiggly);
      layout.addWidget(&lineEdit);
      lineEdit.move(20, 90);
      lineEdit.setGeometry(20, 90, 290, lineEdit.height());
      lineEdit.setText("Habemus papam");
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    Wiggly wiggly;
    QLineEdit lineEdit;
  };
}
