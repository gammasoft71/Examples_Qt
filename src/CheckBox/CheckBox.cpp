#include <QApplication>
#include <QMainWindow>
#include <QCheckBox>

class Form : public QMainWindow {
  //Q_OBJECT

public:
  explicit Form(QWidget* parent = 0) : QMainWindow(parent) {
    this->checkBox1.setText("Checked");
    this->checkBox1.move(30, 30);
    this->checkBox1.setCheckState(Qt::CheckState::Checked);

    this->checkBox2.setText("Unhecked");
    this->checkBox2.move(30, 60);
    this->checkBox2.setCheckState(Qt::CheckState::Unchecked);

    this->checkBox3.setText("Indeterminate");
    this->checkBox3.move(30, 90);
    this->checkBox3.setCheckState(Qt::CheckState::PartiallyChecked);

    this->setCentralWidget(&this->centralWidget);
    this->setWindowTitle("CheckBox example");
    this->resize(300, 300);
  }

private:
  QWidget centralWidget;
  QCheckBox checkBox1 {&this->centralWidget};
  QCheckBox checkBox2 {&this->centralWidget};
  QCheckBox checkBox3 {&this->centralWidget};
 };

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Form form;
  form.show();
  return application.exec();
}
