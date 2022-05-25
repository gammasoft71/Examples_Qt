#pragma once
#include <QComboBox>
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
      stretchableSeparator.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);

      comboBox.addItems({"Red", "Green", "Blue", "Yellow"});

      toolBar.addAction(&newAction);
      toolBar.addAction(&openAction);
      toolBar.addAction(&saveAction);
      toolBar.addSeparator();
      toolBar.addAction(&printAction);
      toolBar.addWidget(&stretchableSeparator);
      toolBar.addWidget(&comboBox);
      toolBar.setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

      connect(&newAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/New";
      });

      connect(&openAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/Open";
      });

      connect(&saveAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/Save";
      });

      connect(&printAction, &QAction::triggered, [&] {
        qDebug() << "ToolBar/Print";
      });

      connect(&comboBox, &QComboBox::currentTextChanged, [&] {
        qDebug() << comboBox.currentText();
      });

      toolBar2.addAction(&trashAction);
      toolBar2.setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

      addToolBar(&toolBar);
      addToolBar(Qt::BottomToolBarArea, &toolBar2);
      setCentralWidget(&frame);
      setUnifiedTitleAndToolBarOnMac(true);
      setWindowTitle("Tool bar example");
      resize(640, 480);
    }

  private:
    QFrame frame;
    QToolBar toolBar {&frame};
    QAction newAction {style()->standardIcon(QStyle::StandardPixmap::SP_FileIcon), "&New", &toolBar};
    QAction openAction  {style()->standardIcon(QStyle::StandardPixmap::SP_DirOpenIcon), "&Open", &toolBar};
    QAction saveAction {style()->standardIcon(QStyle::StandardPixmap::SP_DialogSaveButton), "&Save", &toolBar};
    QAction printAction {"&Print", &toolBar};
    QWidget stretchableSeparator {&frame};
    QComboBox comboBox {&frame};
    QToolBar toolBar2 {&frame};
    QAction trashAction {style()->standardIcon(QStyle::StandardPixmap::SP_TrashIcon), "&Trash", &toolBar2};
  };
}
