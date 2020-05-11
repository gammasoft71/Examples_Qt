#pragma once
#include <QComboBox>
#include <QFrame>
#include <QMainWindow>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      comboBox1.move(10, 10);
      comboBox1.resize(120, comboBox1.height());
      comboBox1.addItems({"Item 1", "Item 2", "Item 3", "Item 4", "Item 5", "Item 6", "Item 7", "Item 8", "Item 9", "Item 10"});
      comboBox1.setEditable(true);
      comboBox1.setCurrentIndex(0);
      connect(&comboBox1, QOverload<int>::of(&QComboBox::activated), [&]() {
        if (comboBox2.currentIndex() != comboBox1.currentIndex())
          comboBox2.setCurrentIndex(comboBox1.currentIndex());
      });

      comboBox2.move(10, 50);
      comboBox2.resize(120, comboBox1.height());
      comboBox2.addItems({"Item 1", "Item 2", "Item 3", "Item 4", "Item 5", "Item 6", "Item 7", "Item 8", "Item 9", "Item 10"});
      comboBox2.setCurrentIndex(0);
      connect(&comboBox2, QOverload<int>::of(&QComboBox::activated), [&]() {
        if (comboBox1.currentIndex() != comboBox2.currentIndex())
          comboBox1.setCurrentIndex(comboBox2.currentIndex());
      });

      setCentralWidget(&frame);
      setWindowTitle("Combo box example");
      resize(300, 300);
    }

  private:
    QFrame frame;
    QComboBox comboBox1 {&frame};
    QComboBox comboBox2 {&frame};
   };
}
