#include "pch.h"
#include "CppUnitTest.h"
#include "D:/VS projects/5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double eps = 0.00001;
			int n = 0;
			double s = 0;

			S(x, eps, n, s);

			double expected = exp(-x);

			Assert::AreEqual(expected, s, eps);
		}
	};
}
