#include <QString>
#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString backgroundWhite = "\033[107m";
    QString foregroundGreen = "\033[92m";
    QString foregroundDarkGray = "\033[90m";
    QString backgroundReset = "\033[49m";
    QString foregroundReset = "\033[39m";

    out << QString("          %1%2██████████████████████████████████████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("        %1%2████████████████████████████████████████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("      %1%2██████████████████████████████████████████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("    %1%2████████████████████████████████████████████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("  %1%2█████████████████████████▀▀▀▀▀▀███████████████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2█████████████████████▀                ▀████████████▀▀▀▀▀████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2███████████████████▀                    ▀██████████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████       ▄████████▄       █████████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2█████████████████      █████████████▄      ████████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████▌     ███████████████▄     ████                ▐████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████      ████████████████     ▐███                ▐████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████     ▐████████████████      ███████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2███████████████▌     ▐████████████████      ███████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2███████████████▌     ▐████████████████      ███████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████     ▐████████████████      ███████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████      ████████████████     ▐███████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████▌     ▐██████████████      ████████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2█████████████████      ▀████████████▀      ████████     ▐███████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████        ▀▀▀▀▀▀▀▀       ▄█████████▄      ▀▀▀▀▀▀████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2███████████████████▄                   ▄████████████           ▐████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████████▄▄               ▀██████████████▄▄▄   ▄▄▄▄████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████████████████████      ▀███████████████████████████████████████%3%4").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2███████████████████████████████████       ████████████████████████████████████%3%4  ").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████████████████████████▄   ▄▄██████████████████████████████████%3%4    ").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████████████████████████████████████████████████████████████%3%4      ").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2████████████████████████████████████████████████████████████████████████%3%4        ").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1%2██████████████████████████████████████████████████████████████████████%3%4          ").arg(backgroundWhite).arg(foregroundGreen).arg(backgroundReset).arg(foregroundReset) << endl;
    out << QString("%1                                          Qt                                    %2").arg(foregroundGreen).arg(foregroundReset) << endl;
    out << QString("%1  Create fluid, high-performance and intuitive UIs, applications, and embedded  %2").arg(foregroundDarkGray).arg(foregroundReset) << endl;
    out << QString("%1                devices – with the same code base for all platforms.            %2").arg(foregroundDarkGray).arg(foregroundReset) << endl;
}
