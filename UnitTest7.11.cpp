#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** y = new int* [2];
			y[0] = new int[2]{ 0,0 };
			y[1] = new int[2]{ 0,1 };
			int S;
			int k;
			Calc(y, 2, 2, S, k);
			Assert::AreEqual(1, S);
		}
	};
}
