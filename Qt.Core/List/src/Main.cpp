#include <QList>
#include <QString>
#include <QTextStream>

using namespace Qt;

int main() {
    QTextStream out(stdout);
    out << "Hello, World!" << endl;

    QList<QString> dinosaurs;

    out << QString("\ncount: %1").arg(dinosaurs.count()) << endl;

    dinosaurs.append("Tyrannosaurus");
    dinosaurs.append("Amargasaurus");
    dinosaurs.append("Mamenchisaurus");
    dinosaurs.append("Deinonychus");
    dinosaurs.append("Compsognathus");

    out << endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << endl;

    out << QString("\ncount: %1").arg(dinosaurs.count());

    out << QString("\ncontains(\"Deinonychus\"): %1").arg(dinosaurs.contains("Deinonychus") ? "True" : "False") << endl;

    out << "\ninsert(2, \"Compsognathus\")" << endl;
    dinosaurs.insert(2, "Compsognathus");

    out << endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << endl;

    out << QString("\ndinosaurs[3]: %1").arg(dinosaurs[3]) << endl;

    out << "\nremoveOne(\"Compsognathus\")" << endl;
    dinosaurs.removeOne("Compsognathus");

    out << endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << endl;

    out << QString("\ncount: %1").arg(dinosaurs.count()) << endl;

    dinosaurs.clear();
    out << "\nclear()" << endl;
    out << QString("count: %1").arg(dinosaurs.count()) << endl;
}

// This code example produces the following output:
//
// count: 0
//
// Tyrannosaurus
// Amargasaurus
// Mamenchisaurus
// Deinonychus
// Compsognathus
//
// count: 5
// contains("Deinonychus"): True
//
// insert(2, "Compsognathus")
//
// Tyrannosaurus
// Amargasaurus
// Compsognathus
// Mamenchisaurus
// Deinonychus
// Compsognathus
//
// dinosaurs[3]: Mamenchisaurus
//
// removeOne("Compsognathus")
//
// Tyrannosaurus
// Amargasaurus
// Mamenchisaurus
// Deinonychus
// Compsognathus
//
// count: 5
//
// clear()
// count: 0
