#include "pch.h"
#include "CppUnitTest.h"
#include "D:\VS projects\5.3\5.3.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		TEST_METHOD(TestMethod_X_Greater_Or_Equal_1)
		{
			double t;
			t = h(1.0); 
			Assert::AreEqual(t, 11.38138, 0.0001); 
		}

		TEST_METHOD(TestMethod_X_Less_Than_1)
		{
			double t;
			t = h(0.0); 
			Assert::AreEqual(t, 0.0, 0.0001);
		}
	};
}