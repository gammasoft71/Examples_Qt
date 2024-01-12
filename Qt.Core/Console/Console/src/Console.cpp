#include <QString>
#include <QTextStream>

int main() {
  auto out = QTextStream {stdout};
  out << "Hello ";
  out << "World!" << Qt::endl;
  out << "Enter your name: ";
  out.flush();
  auto in = QTextStream {stdin};
  auto name = QString {};
  in >> name;
  out << "Good day, ";
  out << name;
  out << "!" << Qt::endl;
}
