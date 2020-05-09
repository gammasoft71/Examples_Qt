#include <QFrame>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QPixmap>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      view.move(10, 10);
      view.resize(280, 280);
      view.setFrameStyle(QFrame::Box | QFrame::Plain);
      view.setAlignment(Qt::AlignCenter);
      item.setPixmap(QPixmap(":/Logo"));
      scene.addItem(&item);

      setCentralWidget(&panel);
      setWindowTitle("Picture box 2 example");
      resize(300, 300);
    }

  private:
    QFrame panel;
    QGraphicsScene scene;
    QGraphicsView view {&scene, &panel};
    QGraphicsPixmapItem item;
  };
}
