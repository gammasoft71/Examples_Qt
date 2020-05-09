#include <QCloseEvent>
#include <QFrame>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace examples {
  class Window1 : public QMainWindow {
  public:
    Window1() {
      button.setText("Close");
      button.move(10, 10);
      connect(&button, &QPushButton::clicked, this, &Window1::close);

      setCentralWidget(&panel);
      setWindowTitle("Window");
      resize(640, 480);
    }

    void closeEvent(QCloseEvent *event) override {
      event->ignore();
      if (QMessageBox::question(this, "Close Window", "Are you sure you want exit?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        QMainWindow::closeEvent(event);
    }

  private:
    QFrame panel;
    QPushButton button {&panel};
  };
}
