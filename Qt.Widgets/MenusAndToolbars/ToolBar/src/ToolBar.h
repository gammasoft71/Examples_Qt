#pragma once
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>
#include <QToolBar>
#include <QStyle>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      toolBar.addAction(&newAction);
      toolBar.addAction(&openAction);
      toolBar.addAction(&saveAction);
      toolBar.setAutoFillBackground(true);

      connect(&newAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/New";
      });

      connect(&openAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/Open";
      });

      connect(&saveAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/Save";
      });

      setCentralWidget(&frame);
      setWindowTitle("Tool bar example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QToolBar toolBar {&frame};
    QAction newAction {style()->standardIcon(QStyle::StandardPixmap::SP_FileIcon), "&New", &toolBar};
    QAction openAction  {style()->standardIcon(QStyle::StandardPixmap::SP_DirOpenIcon), "&Open", &toolBar};
    QAction saveAction {style()->standardIcon(QStyle::StandardPixmap::SP_DialogSaveButton), "&Open", &toolBar};
  };
}
