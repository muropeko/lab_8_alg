#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_2/lab_8_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test81char
{
	TEST_CLASS(test81char)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char  str[80] = "wabab";
			int ent = Count(str, 0, 0);
			Assert::AreEqual(ent, 1);
		}
	};
}

