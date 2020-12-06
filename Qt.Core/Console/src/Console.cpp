#include <QString>
#include <QTextStream>

int main() {
  QTextStream out(stdout);
  out << "Hello ";
  out << "World!" << Qt::endl;
  out << "Enter your name: ";
  out.flush();
  QTextStream in(stdin);
  QString name;
  in >> name;
  out << "Good day, ";
  out << name;
  out << "!" << Qt::endl;
}
