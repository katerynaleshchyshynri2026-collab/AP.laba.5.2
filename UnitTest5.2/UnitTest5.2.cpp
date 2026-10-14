#include "pch.h"
#include "CppUnitTest.h"
#include "../AP.laba.5.2/AP.Laba.5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(2, 1, a);
			Assert::AreEqual(a, -2.0);
		}

		TEST_METHOD(TestMethod2)
		{
			double s; int n;
			S(0, 0.0001, n, s);
			Assert::AreEqual(s, 1.0);
		}

	};
}
