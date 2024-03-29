#pragma once
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QProgressBar>
#include <QStatusBar>
#include <qtimer.h>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      statusBar1.addPermanentWidget(&label1, 0);
      statusBar1.addPermanentWidget(&label2, 0);
      statusBar1.addPermanentWidget(&label3, 0);
      statusBar1.addPermanentWidget(&label4, 1);
      statusBar1.addPermanentWidget(&progressBar1, 0);
      statusBar1.setSizeGripEnabled(true);

      label1.setPixmap(createPixmap(QColorConstants::DarkGreen));

      label2.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label2.setText("Status one");

      label3.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label3.setText("Status two");

      label4.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label4.setText("Status three");

      timer.setInterval(50);
      connect(&timer, &QTimer::timeout, [&] {
        progressBar1.setValue(progressBar1.value() < progressBar1.maximum() ? progressBar1.value() + 1 : progressBar1.minimum());
      });
      timer.start();

      setCentralWidget(&frame);
      setStatusBar(&statusBar1);
      setWindowTitle("Status bar example");
      resize(640, 480);
    }

  private:
    QPixmap createPixmap(const QColor& color) {
      QPixmap pixmap(16, 16);
      pixmap.fill(Qt::transparent);
      QPainter paint(&pixmap);
      paint.setBrush(QBrush(color));
      paint.setPen(QPen(color.lighter(150)));
      paint.drawEllipse(0, 0, pixmap.size().width() - 1, pixmap.size().height() - 1);
      return pixmap;
    }

    QStatusBar statusBar1;
    QFrame frame;
    QLabel label1;
    QLabel label2;
    QLabel label3;
    QLabel label4;
    QProgressBar progressBar1;
    QTimer timer {this};
  };
}
