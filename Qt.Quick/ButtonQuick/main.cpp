#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "ButtonsClicked.h"

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engine;

  ButtonsClicked buttonsClicked;
  engine.rootContext()->setContextProperty("buttonsClicked", &buttonsClicked);

  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}
