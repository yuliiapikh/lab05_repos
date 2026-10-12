#include "pch.h"
#include "CppUnitTest.h"
#include "D:/VS projects/5.1/5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(1, 0); // Викликаємо вашу функцію з аргументами (1, 0)
			Assert::AreEqual(t, 1.0, 0.0001); // Перевіряємо, чи t дорівнює 1.0 (з похибкою 0.0001)
		}

	};
}