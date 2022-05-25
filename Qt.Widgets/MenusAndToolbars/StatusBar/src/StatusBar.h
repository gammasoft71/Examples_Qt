#pragma once
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QProgressBar>
#include <QStatusBar>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      statusBar1.addPermanentWidget(&label1, 0);
      statusBar1.addPermanentWidget(&label2, 1);
      statusBar1.addPermanentWidget(&label3, 1);
      statusBar1.addPermanentWidget(&label4, 4);
      statusBar1.addPermanentWidget(&progressBar1, 1);

      label1.setPixmap(createPixmap(QColorConstants::DarkGreen));

      label2.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label2.setText("Status one");

      label3.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label3.setText("Status two");

      label4.setFrameStyle(QFrame::Panel | QFrame::Sunken);
      label4.setText("Status three");

      progressBar1.setValue(50);

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
    QProgressBar progressBar1;
    QLabel label4;
  };
}
