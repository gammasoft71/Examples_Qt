#pragma once
#include <QObject>

class ButtonsClicked : public QObject {
   Q_OBJECT
public:
  explicit ButtonsClicked (QObject* parent = nullptr) : QObject(parent) {}

  Q_INVOKABLE QString button1Clicked() {
    static int counter = 0;
    return QString("button1 clicked %1 times").arg(++counter);
  }

  Q_INVOKABLE QString button2Clicked() {
    static int counter = 0;
    return QString("button2 clicked %1 times").arg(++counter);
  }
};
