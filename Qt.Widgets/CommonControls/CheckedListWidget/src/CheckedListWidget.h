#pragma once
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QListWidget>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      checkedListWidget.move(10, 10);
      checkedListWidget.resize(160, 200);

      for (auto index = 1; index <= 10; ++index) {
        checkedListWidget.addItem(QString("Item %1").arg(index));
        auto item = checkedListWidget.item(index-1);
        item->setFlags(item->flags()|Qt::ItemIsUserCheckable);
        item->setCheckState(index % 2 != 0 ? Qt::Checked : Qt::Unchecked);
      }
      checkedListWidget.setCurrentRow(0);

      connect(&checkedListWidget, &QListWidget::itemChanged, [&](QListWidgetItem *item) {
        qDebug() << QString("item changed, item='%1', index=%2, value=%3").arg(item->text()).arg(checkedListWidget.row(item)).arg(item->checkState() == Qt::CheckState::Unchecked ? "Unchecked" : "Checked");
      });

      setCentralWidget(&frame);
      setWindowTitle("Checked list widget example");
      resize(200, 240);
    }

  private:
    QFrame frame;
    QListWidget checkedListWidget {&frame};
   };
}
