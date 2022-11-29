#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_char/lab_8_1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test81char
{
	TEST_CLASS(test81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char  str[151] = "wabab";
			char* ent = Change(str);
			Assert::AreEqual(ent, 0);
		}
	};
}
