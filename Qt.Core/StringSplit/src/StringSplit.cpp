#include <QRegExp>
#include <QString>
#include <QTextStream>

int main() {
  auto strings = QString("One Two Three Four\nFive").split(QRegExp("(\x9|\xA|\xB|\xC|\xD|\x20)+"));

  QTextStream out(stdout);
  out << QString("strings.count() = %1").arg(strings.count()) << endl;
  for (auto s : strings)
    out << s << endl;
}

// This code produces the following output:
//
// strings.count() = 5
// One
// Two
// Three
// Four
// Five
