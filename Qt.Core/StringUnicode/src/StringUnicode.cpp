#include <QString>
#include <QTextStream>

int main() {
  QString arabic = u8"\u0627\u0644\u0643\u0644\u0645\u0629 \u0627\u0644\u0639\u0631\u0628\u064A\u0629";
  QString tradChinese = u8"\u4E2D\u570B\u7684\u6F22\u5B57";
  QString simplChinese = u8"\u6C49\u8BED";
  QString french = u8"Langue fran\u00E7aise";
  QString greek = u8"\u0395\u03BB\u03BB\u03B7\u03BD\u03B9\u03BA\u03AE \u03B3\u03BB\u03CE\u03C3\u03C3\u03B1";
  QString hebrew = u8"\u05DB\u05EA\u05D1 \u05E2\u05D1\u05E8\u05D9\u05EA";
  QString hindi = u8"\u0939\u093f\u0928\u094d\u0926\u0940 \u092d\u093e\u0937\u093e";
  QString icelandic = u8"\u00CDslenska";
  QString japanese = u8"\u65E5\u672C\u8A9E\u306E\u3072\u3089\u304C\u306A, \u6F22\u5B57\u3068\u30AB\u30BF\u30AB\u30CA";
  QString korean = u8"\uB300\uD55C\uBBFC\uAD6D\uC758 \uD55C\uAE00";
  QString russian = u8"\u0420\u0443\u0441\u0441\u043A\u0438\u0439 \u044F\u0437\u044B\u043A";

  QTextStream out(stdout);
  out << QString("Arabic:         %1").arg(arabic) << Qt::endl;
  out << QString("Trad. Chinese:  %1").arg(tradChinese) << Qt::endl;
  out << QString("Simpl. Chinese: %1").arg(simplChinese) << Qt::endl;
  out << QString("French:         %1").arg(french) << Qt::endl;
  out << QString("Greek:          %1").arg(greek) << Qt::endl;
  out << QString("Hebrew:         %1").arg(hebrew) << Qt::endl;
  out << QString("Hindi:          %1").arg(hindi) << Qt::endl;
  out << QString("Icelandic:      %1").arg(icelandic) << Qt::endl;
  out << QString("Japanese:       %1").arg(japanese) << Qt::endl;
  out << QString("Korean:         %1").arg(korean) << Qt::endl;
  out << QString("Russian:        %1").arg(russian) << Qt::endl;
}


// This code produces the following output:
//
// Arabic:         الكلمة العربية
// Trad. Chinese:  中國的漢字
// Simpl. Chinese: 汉语
// French:         Langue française
// Greek:          Ελληνική γλώσσα
// Hebrew:         כתב עברית
// Hindi:          हिन्दी भाषा
// Icelandic:      Íslenska
// Japanese:       日本語のひらがな, 漢字とカタカナ
// Korean:         대한민국의 한글
// Russian:        Русский язык
