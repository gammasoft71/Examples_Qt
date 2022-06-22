#include <QAction>
#include <QDebug>
#include <QFrame>
#include <QIcon>
#pragma once
#include <QMainWindow>
#include <QMenu>
#include <QMessageBox>
#include <QMenuBar>
#include <QLabel>
#include <QStyle>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      QMenu* menuFile = menuBar()->addMenu("&File");
      menuFile->addAction(style()->standardIcon(QStyle::StandardPixmap::SP_FileIcon), "&New", this, &Window1::OnMenuFileNewClick, QKeySequence(Qt::CTRL | Qt::Key_N));
      menuFile->addAction(style()->standardIcon(QStyle::StandardPixmap::SP_DirOpenIcon), "&Open", this, &Window1::OnMenuFileOpenClick, QKeySequence(Qt::CTRL | Qt::Key_O));
      menuFile->addSeparator();
      menuFile->addAction(style()->standardIcon(QStyle::StandardPixmap::SP_DialogSaveButton), "&Save", this, &Window1::OnMenuFileSaveClick, QKeySequence(Qt::CTRL | Qt::Key_S));
      menuFile->addAction("Save &As...", this, &Window1::OnMenuFileSaveAsClick);
      menuFile->addSeparator();
      menuFile->addAction(QIcon::fromTheme("document-print"), "&Print", this, &Window1::OnMenuFileSaveClick, QKeySequence(Qt::CTRL | Qt::Key_P));
      menuFile->addAction(QIcon::fromTheme("document-print-preview"), "Print preview");
      menuFile->addSeparator();
      menuFile->addAction("&Exit", this, &Window1::OnMenuFileCloseClick, QKeySequence(Qt::ALT | Qt::Key_F4));

      QMenu* menuEdit = menuBar()->addMenu("&Edit");
      menuEdit->addAction("&Undo", this, &Window1::OnMenuEditUndoClick, QKeySequence(Qt::CTRL | Qt::Key_Z));
      menuEdit->addAction("&Redo", this, &Window1::OnMenuEditRedoClick, QKeySequence(Qt::CTRL | Qt::Key_Y));
      menuEdit->addSeparator();
      menuEdit->addAction(QIcon::fromTheme("edit-cut"), "&Cut", this, &Window1::OnMenuEditCutClick, QKeySequence(Qt::CTRL | Qt::Key_X));
      menuEdit->addAction(QIcon::fromTheme("edit-copy"), "&Copy", this, &Window1::OnMenuEditCopyClick, QKeySequence(Qt::CTRL | Qt::Key_C));
      menuEdit->addAction(QIcon::fromTheme("edit-paste"), "&Paste", this, &Window1::OnMenuEditPasteClick, QKeySequence(Qt::CTRL | Qt::Key_V));
      menuEdit->addSeparator();
      menuEdit->addAction("Select &All", this, &Window1::OnMenuEditSelectAllClick, QKeySequence(Qt::CTRL | Qt::Key_A));

      QMenu* menuHelp = menuBar()->addMenu("&Help");
      menuHelp->addAction("&About", this, &Window1::OnMenuHelpAboutClick);

      setCentralWidget(&frame);
      setWindowTitle("Main menu example");
      resize(300, 300);
    }

  private:
    void OnMenuFileNewClick() {qDebug() << "MainMenu/File/New";}
    void OnMenuFileOpenClick() {qDebug() << "MainMenu/File/Open";}
    void OnMenuFileSaveClick() {qDebug() << "MainMenu/File/Save";}
    void OnMenuFileSaveAsClick() {qDebug() << "MainMenu/File/SaveAs";}
    void OnMenuFileCloseClick() {qDebug() << "MainMenu/File/Close";}
    void OnMenuEditUndoClick() {qDebug() << "MainMenu/Edit/Undo";}
    void OnMenuEditRedoClick() {qDebug() << "MainMenu/Edit/Redo";}
    void OnMenuEditCutClick() {qDebug() << "MainMenu/Edit/Cut";}
    void OnMenuEditCopyClick() {qDebug() << "MainMenu/Edit/Copy";}
    void OnMenuEditPasteClick() {qDebug() << "MainMenu/Edit/Paste";}
    void OnMenuEditDeletaClick() {qDebug() << "MainMenu/Edit/delete";}
    void OnMenuEditSelectAllClick() {qDebug() << "MainMenu/Edit/SelectAll";}
    void OnMenuHelpAboutClick() {QMessageBox::about(this, "About", "MainMenu example.\nVersion 1.0.0\n\n@ 2020 by Gammasoft.");}

    QFrame frame;
    //QLabel label1 {&panel};
  };
}
