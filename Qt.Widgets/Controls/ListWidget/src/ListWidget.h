#pragma once
#include <QFrame>
#include <QHBoxLayout>
#include <QListWidget>
#include <QMainWindow>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
     Window1() {
       layout.addWidget(&listWidgetLeft);
       layout.addWidget(&listWidgetRight);

       listWidgetLeft.addItems({"draw", "cut", "paste", "delete", "open", "close", "remove", "edit", "find", "increment", "decrement", "write", "read", "post", "build", "make", "release", "create", "choose", "erase"});
       listWidgetLeft.setCurrentRow(0);
       connect(&listWidgetLeft, &QListWidget::doubleClicked, [&] {
         listWidgetRight.addItem(listWidgetLeft.currentItem()->text());
         listWidgetRight.setCurrentRow(0);
         delete listWidgetLeft.currentItem();
       });

       listWidgetRight.setSortingEnabled(true);
       connect(&listWidgetRight, &QListWidget::doubleClicked, [&] {
         listWidgetLeft.addItem(listWidgetRight.currentItem()->text());
         listWidgetLeft.setCurrentRow(0);
         delete listWidgetRight.currentItem();
       });

       setCentralWidget(&frame);
       setWindowTitle("List widget example");
       resize(360, 240);
     }

  private:
    QFrame frame;
    QHBoxLayout layout {&frame};
    QListWidget listWidgetLeft;
    QListWidget listWidgetRight;
  };
}
