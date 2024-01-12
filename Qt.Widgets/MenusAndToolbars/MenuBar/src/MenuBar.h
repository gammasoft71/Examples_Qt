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
      menuAddAction(menuFile, style()->standardIcon(QStyle::StandardPixmap::SP_FileIcon), "&New", QKeySequence(Qt::CTRL | Qt::Key_N), this, &Window1::OnMenuFileNewClick);
      menuAddAction(menuFile, style()->standardIcon(QStyle::StandardPixmap::SP_DirOpenIcon), "&Open", QKeySequence(Qt::CTRL | Qt::Key_O), this, &Window1::OnMenuFileOpenClick);
      menuFile->addSeparator();
      menuAddAction(menuFile, style()->standardIcon(QStyle::StandardPixmap::SP_DialogSaveButton), "&Save", QKeySequence(Qt::CTRL | Qt::Key_S), this, &Window1::OnMenuFileSaveClick);
      menuFile->addAction("Save &As...", this, &Window1::OnMenuFileSaveAsClick);
      menuFile->addSeparator();
      menuAddAction(menuFile, QIcon::fromTheme("document-print"), "&Print", QKeySequence(Qt::CTRL | Qt::Key_P), this, &Window1::OnMenuFileSaveClick);
      menuFile->addAction(QIcon::fromTheme("document-print-preview"), "Print preview");
      menuFile->addSeparator();
      menuAddAction(menuFile, "&Exit", QKeySequence(Qt::ALT | Qt::Key_F4), this, &Window1::OnMenuFileCloseClick);

      QMenu* menuEdit = menuBar()->addMenu("&Edit");
      menuAddAction(menuEdit, "&Undo", QKeySequence(Qt::CTRL | Qt::Key_Z), this, &Window1::OnMenuEditUndoClick);
      menuAddAction(menuEdit, "&Redo", QKeySequence(Qt::CTRL | Qt::Key_Y), this, &Window1::OnMenuEditRedoClick);
      menuEdit->addSeparator();
      menuAddAction(menuEdit, QIcon::fromTheme("edit-cut"), "&Cut", QKeySequence(Qt::CTRL | Qt::Key_X), this, &Window1::OnMenuEditCutClick);
      menuAddAction(menuEdit, QIcon::fromTheme("edit-copy"), "&Copy", QKeySequence(Qt::CTRL | Qt::Key_C), this, &Window1::OnMenuEditCopyClick);
      menuAddAction(menuEdit, QIcon::fromTheme("edit-paste"), "&Paste", QKeySequence(Qt::CTRL | Qt::Key_V), this, &Window1::OnMenuEditPasteClick);
      menuEdit->addSeparator();
      menuAddAction(menuEdit, "Select &All", QKeySequence(Qt::CTRL | Qt::Key_A), this, &Window1::OnMenuEditSelectAllClick);

      QMenu* menuHelp = menuBar()->addMenu("&Help");
      menuHelp->addAction("&About", this, &Window1::OnMenuHelpAboutClick);

      setCentralWidget(&frame);
      setWindowTitle("Main menu example");
      resize(300, 300);
    }

  private:
#if QT_VERSION >= 0x060000
    template<class Obj, typename Func1>
    static void menuAddAction(QMenu* menu, const QIcon &icon, const QString &text, const QKeySequence &shortcut, const Obj *object, Func1 slot) {
      menu->addAction(icon, text, shortcut, object, slot);
    }
    template<class Obj, typename Func1>
    static void menuAddAction(QMenu* menu, const QString &text, const QKeySequence &shortcut, const Obj *object, Func1 slot) {
      menu->addAction(text, shortcut, object, slot);
    }
#else
    template<class Obj, typename Func1>
    static void menuAddAction(QMenu* menu, const QIcon &icon, const QString &text, const QKeySequence &shortcut, const Obj *object, Func1 slot) {
      menu->addAction(icon, text, object, slot, shortcut);
    }
    template<class Obj, typename Func1>
    static void menuAddAction(QMenu* menu, const QString &text, const QKeySequence &shortcut, const Obj *object, Func1 slot) {
      menu->addAction(text, object, slot, shortcut);
    }
#endif
    
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
