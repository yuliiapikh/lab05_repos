#include "pch.h"
#include "CppUnitTest.h"
#include "D:/VS projects/5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:

		TEST_METHOD(Test_S1)
		{
			int N = 20;
			double expected = S5(N); // Еталонне значення з ітераційної функції
			double actual = S1(N, 20, 0);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test_S2)
		{
			int N = 20;
			double expected = S5(N);
			double actual = S2(N, N, 0);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test_S3)
		{
			int N = 20;
			double expected = S5(N);
			double actual = S3(N, 20);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test_S4)
		{
			int N = 20;
			double expected = S5(N);
			double actual = S4(N, N);
			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(Test_S5)
		{
			int N = 20;
			double actual = S5(N);
			// Перевірка, що S5(20) обчислює значення першого кроку
			double expected = (cos(20.0) + sin(20.0)) / (1.0 + cos(20.0) * sin(20.0));
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}