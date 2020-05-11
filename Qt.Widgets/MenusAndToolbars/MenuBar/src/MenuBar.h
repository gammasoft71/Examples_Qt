#include <QAction>
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QMenu>
#include <QMessageBox>
#include <QMenuBar>
#include <QLabel>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      QMenu* menuFile = menuBar()->addMenu("&File");
      menuFile->addAction("&New", this, &Window1::OnMenuFileNewClick, QKeySequence(Qt::CTRL + Qt::Key_N));
      menuFile->addAction("&Open", this, &Window1::OnMenuFileOpenClick, QKeySequence(Qt::CTRL + Qt::Key_O));
      menuFile->addSeparator();
      menuFile->addAction("&Close", this, &Window1::OnMenuFileCloseClick, QKeySequence(Qt::CTRL + Qt::Key_W));

      QMenu* menuEdit = menuBar()->addMenu("&Edit");
      menuEdit->addAction("&Undo", this, &Window1::OnMenuEditUndoClick, QKeySequence(Qt::CTRL + Qt::Key_Z));
      menuEdit->addAction("&Redo", this, &Window1::OnMenuEditRedoClick, QKeySequence(Qt::CTRL + Qt::Key_Y));
      menuEdit->addSeparator();
      menuEdit->addAction("&Cut", this, &Window1::OnMenuEditCutClick, QKeySequence(Qt::CTRL + Qt::Key_X));
      menuEdit->addAction("&Copy", this, &Window1::OnMenuEditCopyClick, QKeySequence(Qt::CTRL + Qt::Key_C));
      menuEdit->addAction("&Paste", this, &Window1::OnMenuEditPasteClick, QKeySequence(Qt::CTRL + Qt::Key_V));
      menuEdit->addAction("&Delete", this, &Window1::OnMenuEditDeletaClick, QKeySequence(Qt::CTRL + Qt::Key_Backspace));
      menuEdit->addSeparator();
      menuEdit->addAction("Select &All", this, &Window1::OnMenuEditSelectAllClick, QKeySequence(Qt::CTRL + Qt::Key_A));

      QMenu* menuHelp = menuBar()->addMenu("&Help");
      menuHelp->addAction("&About", this, &Window1::OnMenuHelpAboutClick);

      setCentralWidget(&frame);
      setWindowTitle("Main menu example");
      resize(300, 300);
    }

  private:
    void OnMenuFileNewClick() {qDebug() << "MainMenu/File/New";}
    void OnMenuFileOpenClick() {qDebug() << "MainMenu/File/Open";}
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
