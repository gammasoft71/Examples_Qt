#include <QTextStream>

int main() {
  auto out = QTextStream {stdout};
  out << "Hello, World!" << Qt::endl;
}

// This code produces the following output :
//
// Hello, World!
