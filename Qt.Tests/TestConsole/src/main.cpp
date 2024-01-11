#include <QTextStream>

using namespace Qt;

int main() {
    QTextStream out(stdout);
    out << "Hello, World!" << Qt::endl;
}
