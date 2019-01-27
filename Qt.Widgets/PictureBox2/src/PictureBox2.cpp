#include <QApplication>
#include <QFrame>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QPixmap>


class Form : public QMainWindow {
public:
  Form() {
    this->view.move(10, 10);
    this->view.resize(280, 280);
    this->view.setFrameStyle(QFrame::Box | QFrame::Plain);
    this->view.setAlignment(Qt::AlignCenter);
    this->item.setPixmap(QPixmap(":/Logo"));
    scene.addItem(&item);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("PictureBox2 example");
    this->resize(300, 300);
  }

private:
  QFrame panel;
  QGraphicsScene scene;
  QGraphicsView view {&this->scene, &this->panel};
  QGraphicsPixmapItem item;
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
