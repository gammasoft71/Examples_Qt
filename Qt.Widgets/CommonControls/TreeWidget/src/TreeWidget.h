#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVBoxLayout>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      layout.addWidget(&treeWidget1);

      auto rootNode = new QTreeWidgetItem({"Root"});
      treeWidget1.addTopLevelItem(rootNode);
      auto firstNode = new QTreeWidgetItem({"First"});
      rootNode->addChild(firstNode);
      firstNode->addChild(new QTreeWidgetItem({"Second"}));
      firstNode->addChild(new QTreeWidgetItem({"Third"}));
      auto fourthNode = new QTreeWidgetItem({"Fourth"});
      rootNode->addChild(fourthNode);
      fourthNode->addChild(new QTreeWidgetItem({"Fifth"}));
      fourthNode->addChild(new QTreeWidgetItem({"Sixth"}));
      fourthNode->addChild(new QTreeWidgetItem({"{Seventh"}));

      treeWidget1.setHeaderHidden(true);
      treeWidget1.addTopLevelItem(rootNode);
      treeWidget1.expandAll();

      setCentralWidget(&frame);
      setWindowTitle("Tree widget example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    QTreeWidget treeWidget1;
  };
}
