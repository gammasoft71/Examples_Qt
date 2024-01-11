#pragma once
#include <QComboBox>
#include <QFrame>
#include <QListView>
#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include "Ai48.xpm"
#include "Avi48.xpm"
#include "Bmp48.xpm"

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      layout.addWidget(&listView1, 1);
      layout.addWidget(&comboBoxMode, 0);

      model.setHorizontalHeaderLabels({"Name", "Type", "Size", "Comment"});
      model.appendRow({new QStandardItem(QIcon(QPixmap(aviIcon48)), "First"), new QStandardItem("Movie"), new QStandardItem("5359"), new QStandardItem("This is the first item")});
      model.appendRow({new QStandardItem(QIcon(QPixmap(aiIcon48)), "Second"), new QStandardItem("Picture"), new QStandardItem("1256"), new QStandardItem("This is the second item")});
      model.appendRow({new QStandardItem(QIcon(QPixmap(bmpIcon48)), "Third"), new QStandardItem("Picture"), new QStandardItem("4284"), new QStandardItem("This is the third item")});

      listView1.setModel(&model);
      listView1.setViewMode(QListView::ViewMode::ListMode);

      comboBoxMode.addItems({"List", "Icon"});
      connect(&comboBoxMode, qOverload<int>(&QComboBox::currentIndexChanged), [&](int index) {
        listView1.setViewMode(static_cast<QListView::ViewMode>(index));
        listView1.setIconSize(listView1.viewMode() == QListView::ViewMode::IconMode ? QSize {48, 48} : QSize {16, 16});
      });

      setCentralWidget(&frame);
      setWindowTitle("List view example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QVBoxLayout layout {&frame};
    QListView listView1;
    QStandardItemModel model;
    QComboBox comboBoxMode;
  };
}
