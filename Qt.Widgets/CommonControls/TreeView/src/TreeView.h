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

      auto rootNode = new QStandardItem("Root");
      model.appendRow(rootNode);
      auto firstNode = new QStandardItem("First");
      rootNode->appendRow(firstNode);
      firstNode->appendRow(new QStandardItem("Second"));
      firstNode->appendRow(new QStandardItem("Third"));
      auto fourthNode = new QStandardItem("Fourth");
      rootNode->appendRow(fourthNode);
      fourthNode->appendRow(new QStandardItem("Fifth"));
      fourthNode->appendRow(new QStandardItem("Sixth"));
      fourthNode->appendRow(new QStandardItem("Seventh"));

      treeView1.setHeaderHidden(true);
      treeView1.setModel(&model);
      treeView1.expandAll();

      setCentralWidget(&frame);
      setWindowTitle("Tree view example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    QTreeView treeView1;
    QStandardItemModel model;
  };
}
