#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1 G/Liquid.h"
#include "..//OOP Lab 5.1 G/Solution.h"
#include "..//OOP Lab 5.1 G/Object.h"
#include "..//OOP Lab 5.1 G/Liquid.cpp"
#include "..//OOP Lab 5.1 G/Solution.cpp"
#include "..//OOP Lab 5.1 G/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Liquid liquid("water", 23);
			Assert::AreEqual(23, liquid.getDensity());
		}
	};
}
