#include <QList>
#include <QString>
#include <QTextStream>

int main() {
    QTextStream out(stdout);
    out << "Hello, World!" << Qt::endl;

    QList<QString> dinosaurs;

    out << QString("\ncount: %1").arg(dinosaurs.count()) << Qt::endl;

    dinosaurs.append("Tyrannosaurus");
    dinosaurs.append("Amargasaurus");
    dinosaurs.append("Mamenchisaurus");
    dinosaurs.append("Deinonychus");
    dinosaurs.append("Compsognathus");

    out << Qt::endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << Qt::endl;

    out << QString("\ncount: %1").arg(dinosaurs.count());

    out << QString("\ncontains(\"Deinonychus\"): %1").arg(dinosaurs.contains("Deinonychus") ? "True" : "False") << Qt::endl;

    out << "\ninsert(2, \"Compsognathus\")" << Qt::endl;
    dinosaurs.insert(2, "Compsognathus");

    out << Qt::endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << Qt::endl;

    out << QString("\ndinosaurs[3]: %1").arg(dinosaurs[3]) << Qt::endl;

    out << "\nremoveOne(\"Compsognathus\")" << Qt::endl;
    dinosaurs.removeOne("Compsognathus");

    out << Qt::endl;
    for (QString dinosaur : dinosaurs)
      out << dinosaur << Qt::endl;

    out << QString("\ncount: %1").arg(dinosaurs.count()) << Qt::endl;

    dinosaurs.clear();
    out << "\nclear()" << Qt::endl;
    out << QString("count: %1").arg(dinosaurs.count()) << Qt::endl;
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
