#pragma once
#include <QFrame>
#include <QMainWindow>
#include <QLabel>
#include <QResizeEvent>

namespace Examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      label1.setText("Lorem ipsum");
      label1.move(10, 50);
      
      label2.setText("Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
      label2.adjustSize();
      label2.move(10, 100);
      
      QString text("Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
      QFontMetrics metrics(label3.font());
      QString elidedText = metrics.elidedText(text, Qt::ElideRight, label3.width());
      label3.setText(elidedText);
      label3.move(10, 150);
      
      label4.setText("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus.Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor.Cras elementum ultrices diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi. Proin porttitor, orci nec nonummy molestie, enim est eleifend mi, non fermentum diam nisl sit amet erat. Duis semper. Duis arcu massa, scelerisque vitae, consequat in, pretium a, enim.Pellentesque congue. Ut in risus volutpat libero pharetra tempor.Cras vestibulum bibendum augue. Praesent egestas leo in pede.Praesent blandit odio eu enim.Pellentesque sed dui ut augue blandit sodales.Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Aliquam nibh. Mauris ac mauris sed pede pellentesque fermentum.Maecenas adipiscing ante non diam sodales hendrerit.\n\nUt velit mauris, egestas sed, gravida nec, ornare ut, mi. Aenean ut orci vel massa suscipit pulvinar.Nulla sollicitudin. Fusce varius, ligula non tempus aliquam, nunc turpis ullamcorper nibh, in tempus sapien eros vitae ligula.Pellentesque rhoncus nunc et augue.Integer id felis.Curabitur aliquet pellentesque diam. Integer quis metus vitae elit lobortis egestas.Lorem ipsum dolor sit amet, consectetuer adipiscing elit.Morbi vel erat non mauris convallis vehicula.Nulla et sapien.Integer tortor tellus, aliquam faucibus, convallis id, congue eu, quam. Mauris ullamcorper felis vitae erat.Proin feugiat, augue non elementum posuere, metus purus iaculis lectus, et tristique ligula justo vitae magna.\n\nAliquam convallis sollicitudin purus. Praesent aliquam, enim at fermentum mollis, ligula massa adipiscing nisl, ac euismod nibh nisl eu lectus.Fusce vulputate sem at sapien.Vivamus leo. Aliquam euismod libero eu enim.Nulla nec felis sed leo placerat imperdiet.Aenean suscipit nulla in justo.Suspendisse cursus rutrum augue. Nulla tincidunt tincidunt mi. Curabitur iaculis, lorem vel rhoncus faucibus, felis magna fermentum augue, et ultricies lacus lorem varius purus.Curabitur eu amet.\n");
      label4.move({10, 200});
      label4.resize(350, 150);
      label4.setAlignment(Qt::AlignCenter | Qt::AlignTop);
      label4.setWordWrap(true);
      
      setCentralWidget(&frame);
      setWindowTitle("Label example");
      resize(390, 360);
    }
    
    void resizeEvent(QResizeEvent* event) override {
      QMainWindow::resizeEvent(event);
      label4.resize(event->size().width() - 40, event->size().height() - 210);
    }
    
  private:
    QFrame frame;
    QLabel label1 {&frame};
    QLabel label2 {&frame};
    QLabel label3 {&frame};
    QLabel label4 {&frame};
  };
}
