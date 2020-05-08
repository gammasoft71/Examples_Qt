#include <QApplication>
#include <QCursor>
#include <QFrame>
#include <QListWidget>
#include <QMainWindow>

class Window1 : public QMainWindow {
public:
  Window1() {
    listWidgetCursors.move(20, 20);
    listWidgetCursors.resize(150, 200);
    listWidgetCursors.addItems({"Arrow", "Up arrow", "Cross", "Wait", "IBeam", "Size vertical", "Size horizantal", "Size top-right / bottom-left corner", "Size top-left / bottom-right corner", "Size all", "Blank", "Split vertical", "Split horizontal", "Pointing hand", "Forbidden", "What's this", "Busy", "Open hand", "Closed hand", "Drag copy", "Drag move", "Drag link"});
    connect(&listWidgetCursors, &QListWidget::itemSelectionChanged, [&]() {
      testZone.setCursor({static_cast<Qt::CursorShape>(listWidgetCursors.currentRow())});
    });
    listWidgetCursors.setCurrentRow(0);

    testZone.move(190, 20);
    testZone.resize(150, 200);
    testZone.setFrameStyle(QFrame::StyledPanel|QFrame::Sunken);
    testZone.setAutoFillBackground(true);
    testZone.setPalette({listWidgetCursors.palette().color(QPalette::Base)});

    setCentralWidget(&panel);
    setWindowTitle("Cursor example");
    resize(360, 240);
  }

private:
  QFrame panel;
  QListWidget listWidgetCursors {&panel};
  QFrame testZone {&panel};
};

int main(int argc, char *argv[]) {
  QApplication application(argc, argv);
  Window1 form;
  form.show();
  return application.exec();
}
