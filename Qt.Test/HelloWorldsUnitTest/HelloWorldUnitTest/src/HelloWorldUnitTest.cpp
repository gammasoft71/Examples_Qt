#include <QTest>
#include <QString>

namespace UnitTests {
  class HelloWorldTest : public QObject{
    Q_OBJECT
  private slots:
    void CreateStringFromLiteral() {
      auto s = QString {"Hello, World!"};
      QCOMPARE_EQ(s.size(), 13);
      QCOMPARE_EQ(s, "Hello, World!");
    }
  };
}

QTEST_MAIN(UnitTests::HelloWorldTest)
#include "HelloWorldUnitTest.moc"

// This code can produce the following output :
//
// ********* Start testing of UnitTests::HelloWorldTest *********
// Config: Using QtTest library 6.6.0, Qt 6.6.0 (arm64-little_endian-lp64 shared (dynamic) release build; by Apple LLVM 15.0.0 (clang-1500.0.40.1)), macos 14.2
// PASS   : UnitTests::HelloWorldTest::initTestCase()
// PASS   : UnitTests::HelloWorldTest::CreateStringFromLiteral()
// PASS   : UnitTests::HelloWorldTest::cleanupTestCase()
// Totals: 3 passed, 0 failed, 0 skipped, 0 blacklisted, 1ms
// ********* Finished testing of UnitTests::HelloWorldTest *********
