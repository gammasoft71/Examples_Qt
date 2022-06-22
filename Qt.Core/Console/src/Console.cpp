#include <QString>
#include <QTextStream>

using namespace Qt;

int main() {
  QTextStream out(stdout);
  out << "Hello ";
  out << "World!" << endl;
  out << "Enter your name: ";
  out.flush();
  QTextStream in(stdin);
  QString name;
  in >> name;
  out << "Good day, ";
  out << name;
  out << "!" << endl;
}
