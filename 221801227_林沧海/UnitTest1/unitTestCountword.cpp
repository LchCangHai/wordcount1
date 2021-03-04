#include "pch.h"
#include "CppUnitTest.h"
#include "../src/head.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		fun myfun;
		string str;
		TEST_METHOD(TestMethod1)
		{		
			str = "hello World, my name is lincnaghai";
			Assert::AreEqual(4, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod2) {
			string str = "aaaa1234 a bb ccc ddd 1233 nihao1234 hello how## what## what55 how55 WHAT55";
			Assert::AreEqual(5, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod3) {
			str = "hello World, my name is lincnaghai hello World, my name is lincnaghai hello World, my name is lincnaghai hello World, my name is lincnaghai";
			Assert::AreEqual(16, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod4) {
			str = "!@#$AS ABCDEG nihaoooo ()_) ___nihao 123nihaoaaa";// 错误格式开头但后面是正确的
			Assert::AreEqual(2, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod5) {
			str = "你好 四个字符 我爱java 你好world hello世界";
			Assert::AreEqual(0, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod6) {
			str = "不妨称之为WordCount 我的天 hello world";
			Assert::AreEqual(2, myfun.countWord(str));
		}
		TEST_METHOD(TestMethod7) {
			str = "a b c d A B C D ! @ 1 2 3 4 % _";
			Assert::AreEqual(0, myfun.countWord(str));
		}
	};
}
