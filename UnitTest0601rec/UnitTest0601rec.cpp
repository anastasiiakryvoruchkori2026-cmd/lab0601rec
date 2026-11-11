#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab0601rec/lab0601rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0601rec
{
	TEST_CLASS(UnitTest0601rec)
	{
	public:
		
		TEST_METHOD(TestCount)
		{
			int t;
			const int n = 5;
			int a[n] = { -5, 1, 2, 3, 4 };

			t = Count(a, n, 0);

			Assert::AreEqual(t, 3);
		}

		TEST_METHOD(TestSum)
		{
			int t;
			const int n = 5;
			int a[n] = { -5, 1, 2, 3, 4 };

			t = Sum(a, n, 0);

			Assert::AreEqual(t, 6);
		}
	};
}
