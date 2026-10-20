#include "pch.h"
#include "CppUnitTest.h"
#include "D:/VS projects/5.5/5.5.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		// Тест для n = 1 (базовий випадок)
		TEST_METHOD(Test_G_N1)
		{
			int actual = G(1);
			Assert::AreEqual(2, actual);
		}

		// Тест для n = 2 (базовий випадок)
		TEST_METHOD(Test_G_N2)
		{
			int actual = G(2);
			Assert::AreEqual(3, actual);
		}

		// Тест для n = 4 (рекурсивний випадок: G(4) = G(3) + G(2) = 5 + 3 = 8)
		TEST_METHOD(Test_G_N4)
		{
			int actual = G(4);
			Assert::AreEqual(8, actual);
		}
	};
}