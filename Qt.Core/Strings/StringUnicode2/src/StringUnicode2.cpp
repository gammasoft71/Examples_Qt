#include <QString>
#include <QTextStream>

using namespace Qt;

int main() {
  QTextStream out(stdout);
  QString str = u8"\u65E5\u672C\u8A9E\u306E\u3072\u3089\u304C\u306A\u002c\u0020\u6F22\u5B57\u3068\u30AB\u30BF\u30AB\u30CA\U0001F428\u0021";

  // Remarks : the koala character (\U0001F428) is splitted into two utf16...
  QString result = "";
  for(auto c : str)
    result += QString("%1 ").arg(c);
  out << result << Qt::endl;

  // Remarks : the koala character (\U0001F428) is splitted into two utf16...
  result = "";
  for(auto c : str)
    result += QString("\\u%1").arg(c.unicode(), 4, 16, QChar('0'));
  out << result << Qt::endl;
}

// This code produces the following output:
//
// 日 本 語 の ひ ら が な ,   漢 字 と カ タ カ ナ ? ? !
// \u65e5\u672c\u8a9e\u306e\u3072\u3089\u304c\u306a\u002c\u0020\u6f22\u5b57\u3068\u30ab\u30bf\u30ab\u30ca\ud83d\udc28\u0021
