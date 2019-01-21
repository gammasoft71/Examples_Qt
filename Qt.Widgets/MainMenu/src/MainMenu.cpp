#include <QAction>
#include <QApplication>
#include <QDebug>
#include <QFrame>
#include <QMainWindow>
#include <QMenu>
#include <QMessageBox>
#include <QMenuBar>
#include <QLabel>

class Form : public QMainWindow {
public:
  Form() {
    QMenu* menuFile = this->menuBar()->addMenu("&File");
    menuFile->addAction("&New", this, &Form::OnMenuFileNewClick, QKeySequence(Qt::CTRL + Qt::Key_N));
    menuFile->addAction("&Open", this, &Form::OnMenuFileOpenClick, QKeySequence(Qt::CTRL + Qt::Key_O));
    menuFile->addSeparator();
    menuFile->addAction("&Close", this, &Form::OnMenuFileCloseClick, QKeySequence(Qt::CTRL + Qt::Key_W));
    
    QMenu* menuEdit = this->menuBar()->addMenu("&Edit");
    menuEdit->addAction("&Undo", this, &Form::OnMenuEditUndoClick, QKeySequence(Qt::CTRL + Qt::Key_Z));
    menuEdit->addAction("&Redo", this, &Form::OnMenuEditRedoClick, QKeySequence(Qt::CTRL + Qt::Key_Y));
    menuEdit->addSeparator();
    menuEdit->addAction("&Cut", this, &Form::OnMenuEditCutClick, QKeySequence(Qt::CTRL + Qt::Key_X));
    menuEdit->addAction("&Copy", this, &Form::OnMenuEditCopyClick, QKeySequence(Qt::CTRL + Qt::Key_C));
    menuEdit->addAction("&Paste", this, &Form::OnMenuEditPasteClick, QKeySequence(Qt::CTRL + Qt::Key_V));
    menuEdit->addAction("&Delete", this, &Form::OnMenuEditDeletaClick, QKeySequence(Qt::CTRL + Qt::Key_Backspace));
    menuEdit->addSeparator();
    menuEdit->addAction("Select &All", this, &Form::OnMenuEditSelectAllClick, QKeySequence(Qt::CTRL + Qt::Key_A));

    QMenu* menuHelp = this->menuBar()->addMenu("&Help");
    menuHelp->addAction("&About", this, &Form::OnMenuHelpAboutClick);

    this->setCentralWidget(&this->panel);
    this->setWindowTitle("MainMenu example");
    this->resize(300, 300);
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
  void OnMenuHelpAboutClick() {QMessageBox::about(this, "About", "MainMenu example.\nVersion 1.0.0\n\n@ 2019 by Gammasoft.");}

  QFrame panel;
  //QLabel label1 {&this->panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
