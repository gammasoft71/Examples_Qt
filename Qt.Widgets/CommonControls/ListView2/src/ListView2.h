#pragma once
#include <QComboBox>
#include <QFrame>
#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QTreeView>
#include <QVBoxLayout>
#include "Ai16.xpm"
#include "Avi16.xpm"
#include "Bmp16.xpm"

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      layout.addWidget(&treeView1);

      model.setHorizontalHeaderLabels({"Name", "Type", "Size", "Comment"});
      model.appendRow({new QStandardItem(QIcon(QPixmap(aviIcon16)), "First"), new QStandardItem("Movie"), new QStandardItem("5359"), new QStandardItem("This is the first item")});
      model.appendRow({new QStandardItem(QIcon(QPixmap(aiIcon16)), "Second"), new QStandardItem("Picture"), new QStandardItem("1256"), new QStandardItem("This is the second item")});
      model.appendRow({new QStandardItem(QIcon(QPixmap(bmpIcon16)), "Third"), new QStandardItem("Picture"), new QStandardItem("4284"), new QStandardItem("This is the third item")});

      treeView1.header()->setModel(&model);
      treeView1.setModel(&model);
      treeView1.setColumnWidth(0, 100);
      treeView1.setColumnWidth(1, 70);
      treeView1.setColumnWidth(2, 50);
      treeView1.setColumnWidth(3, 160);
      treeView1.setItemsExpandable(false);

      setCentralWidget(&frame);
      setWindowTitle("Tree view example");
      resize(410, 260);
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    QTreeView treeView1;
    QStandardItemModel model;
  };
}
