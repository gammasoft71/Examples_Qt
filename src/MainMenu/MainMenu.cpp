#include <QAction>
#include <QApplication>
#include <QDebug>
#include <QMainWindow>
#include <QMenu>
#include <QMessageBox>
#include <QMenuBar>
#include <QLabel>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    QMenu* fileMenu = this->menuBar()->addMenu("&File");
    fileMenu->addAction("&New", this, &Form::FileNew, QKeySequence(Qt::CTRL + Qt::Key_N));
    fileMenu->addAction("&Open", this, &Form::FileOpen, QKeySequence(Qt::CTRL + Qt::Key_O));
    fileMenu->addSeparator();
    fileMenu->addAction("&Close", this, &Form::FileClose, QKeySequence(Qt::CTRL + Qt::Key_W));
    
    QMenu* editMenu = this->menuBar()->addMenu("&Edit");
    editMenu->addAction("&Undo", this, &Form::EditUndo, QKeySequence(Qt::CTRL + Qt::Key_Z));
    editMenu->addAction("&Redo", this, &Form::EditRedo, QKeySequence(Qt::CTRL + Qt::Key_Y));
    editMenu->addSeparator();
    editMenu->addAction("&Cut", this, &Form::EditCut, QKeySequence(Qt::CTRL + Qt::Key_X));
    editMenu->addAction("&Copy", this, &Form::EditCopy, QKeySequence(Qt::CTRL + Qt::Key_C));
    editMenu->addAction("&Paste", this, &Form::EditPaste, QKeySequence(Qt::CTRL + Qt::Key_V));
    editMenu->addAction("&Delete", this, &Form::EditDeleta, QKeySequence(Qt::CTRL + Qt::Key_Backspace));
    editMenu->addSeparator();
    editMenu->addAction("Select &All", this, &Form::EditSelectAll, QKeySequence(Qt::CTRL + Qt::Key_A));

    QMenu* helpMenu = this->menuBar()->addMenu("&Help");
    helpMenu->addAction("&About", this, &Form::HelpAbout);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("MainMenu example");
    this->resize(300, 300);
  }

  void FileNew() {qDebug() << "MainMenu/File/New";}
  void FileOpen() {qDebug() << "MainMenu/File/Open";}
  void FileClose() {qDebug() << "MainMenu/File/Close";}
  void EditUndo() {qDebug() << "MainMenu/Edit/Undo";}
  void EditRedo() {qDebug() << "MainMenu/Edit/Redo";}
  void EditCut() {qDebug() << "MainMenu/Edit/Cut";}
  void EditCopy() {qDebug() << "MainMenu/Edit/Copy";}
  void EditPaste() {qDebug() << "MainMenu/Edit/Paste";}
  void EditDeleta() {qDebug() << "MainMenu/Edit/delete";}
  void EditSelectAll() {qDebug() << "MainMenu/Edit/SelectAll";}
  void HelpAbout() {
    QMessageBox::about(this, "About",
                       "MainMenu example.\n"
                       "Version 1.0.0\n"
                       "\n"
                       "@ 2018 by Gammasoft.");
  }

private:
  QWidget centralWidget;
  //QLabel label1 {&this->centralWidget};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
