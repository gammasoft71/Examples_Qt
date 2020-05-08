#include <QApplication>
#include <QFrame>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QPixmap>

class Window1 : public QMainWindow {
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

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 window1;
  window1.show();
  return application.exec();
}
