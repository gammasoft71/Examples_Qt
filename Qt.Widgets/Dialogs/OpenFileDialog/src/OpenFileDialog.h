#include <QFileDialog>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardPaths>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      button.setText("Open...");
      button.move(10, 10);
      connect(&button, &QPushButton::clicked, [&]() {
        QFileDialog openFileDialog;
        openFileDialog.setNameFilters({"Text Files (*.txt)", "All Files (*)"});
        openFileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
        if (openFileDialog.exec() == QDialog::Accepted) {
          label.setText(QString("File = %1").arg(openFileDialog.selectedFiles()[0]));
          label.resize(label.sizeHint());
        }
      });

      label.move(10, 50);
      label.setText("File = ");

      setCentralWidget(&frame);
      setWindowTitle("Open file dialog example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QPushButton button {&frame};
    QLabel label {&frame};
  };
}
