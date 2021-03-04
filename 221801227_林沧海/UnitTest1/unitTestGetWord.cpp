#include "pch.h"
#include "CppUnitTest.h"
#include "../src/head.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest1)
	{
	public:
		fun myfun;
		string str;
		TEST_METHOD(getWord1)
		{
			str = "hello World, my name is lincanghai";
			Assert::AreEqual(1, myfun.getWordTest(str, "hello"));
		}
		TEST_METHOD(getWord2)
		{
			str = "hello World, HELLO WORLD";
			Assert::AreEqual(2, myfun.getWordTest(str, "hello"));
		}
		TEST_METHOD(getWord3)
		{
			str = "file FILE file FiLe FIlE";
			Assert::AreEqual(5, myfun.getWordTest(str, "file"));
		}
	};
}
