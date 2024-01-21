#pragma once
#include <QApplication>
#include <QCloseEvent>
#include <QCheckBox>
#include <QFrame>
#include <QMainWindow>
#include <QPushButton>

namespace Examples {
  class Window2 : public QMainWindow {
    Q_OBJECT
  signals:
    bool windowClosing();
    void windowClosed();
    
  protected:
    void closeEvent(QCloseEvent* event) override {
      event->setAccepted(emit windowClosing());
      if (event->isAccepted()) emit windowClosed();
    }
  };
  
  class Window1 : public QMainWindow {
    Q_OBJECT
    ;
  public:
    Window1() {
      resize(320, 325);
      setWindowTitle("Window1 show and hide example");
      setCentralWidget(&frame);
      
      window2.resize(300, 100);
      window2.setWindowTitle("Close count = 0");
      window2.connect(&window2, &Window2::windowClosing, [&] {return !cancelCloseCheckBox.isChecked();});
      window2.connect(&window2, &Window2::windowClosed, [&] {window2.setWindowTitle(QString {"Close count = %1"}.arg(++closedCount));});
      
      closeButton.move(10, 10);
      closeButton.resize(100, 40);
      closeButton.connect(&closeButton, &QPushButton::clicked, [&] {window2.close();});
      
      showButton.move(10, 60);
      showButton.resize(100, 40);
      showButton.connect(&showButton, &QPushButton::clicked, [&] {window2.show();});
      
      hideButton.move(10, 110);
      hideButton.resize(100, 40);
      hideButton.connect(&hideButton, &QPushButton::clicked, [&] {window2.hide();});
      
      cancelCloseCheckBox.move(10, 160);
      cancelCloseCheckBox.resize(100, 40);
    }
    
  private:
    void closeEvent(QCloseEvent* event) override {QApplication::exit();}
    
    int closedCount = 0;
    Window2 window2;
    QFrame frame {this};
    QPushButton closeButton {"Close", &frame};
    QPushButton showButton {"Show", &frame};
    QPushButton hideButton {"Hide", &frame};
    QCheckBox cancelCloseCheckBox {"cancel close", &frame};
  };
}
