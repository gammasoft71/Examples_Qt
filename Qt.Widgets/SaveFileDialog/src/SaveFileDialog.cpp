#include <QApplication>
#include <QFileDialog>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardPaths>

class Window1 : public QMainWindow {
public:
  Window1() {
    button.setText("Save...");
    button.move(10, 10);
    connect(&button, &QPushButton::clicked, [&]() {
      QFileDialog saveFileDialog;
      saveFileDialog.setNameFilters({"Text Files (*.txt)", "All Files (*)"});
      saveFileDialog.setAcceptMode(QFileDialog::AcceptSave);
      saveFileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
      saveFileDialog.selectFile("MyFile.txt");
     if (saveFileDialog.exec() == QDialog::Accepted)
        label.setText(QString("File = %1").arg(saveFileDialog.selectedFiles()[0]));
    });

    label.move(10, 50);
    label.resize(280, 20);
    label.setText("File = ");

    setCentralWidget(&panel);
    setWindowTitle("MainWindow");
    resize(300, 300);
  }

private:
  QFrame panel;
  QPushButton button {&panel};
  QLabel label {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
