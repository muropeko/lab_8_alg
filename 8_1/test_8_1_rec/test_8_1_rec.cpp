#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_rec/lab_8_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test81rec
{
	TEST_CLASS(test81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "wabab";
			int ent = Count(str, 100);
			Assert::AreEqual(ent, 0);
		}
	};
}
