#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1/lab_8_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test81
{
	TEST_CLASS(test81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "abc";
			int waw = Count(str);
			Assert::AreEqual(waw, 0);
		}
	};
}
