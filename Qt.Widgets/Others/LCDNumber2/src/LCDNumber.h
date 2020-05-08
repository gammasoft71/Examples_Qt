#include <QMouseEvent>
#include <QLCDNumber>

class LCDNumber : public QLCDNumber {
  Q_OBJECT
public:
  explicit LCDNumber(QWidget* parent = nullptr) : QLCDNumber(parent) {}

protected:
  void mousePressEvent(QMouseEvent* event) override {
    emit clicked(event);
  }

signals:
  void clicked(QMouseEvent* event);
};

