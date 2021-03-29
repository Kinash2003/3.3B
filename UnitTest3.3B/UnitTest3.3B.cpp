#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3B/LongLong.h"
#include "../3.3B/LongLong.cpp"
#include "../3.3B/Triad.h"
#include "../3.3B/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			LongLong A(7, 7), B(9, 9);
			Assert::AreEqual(A < B, true);

		}
	};
}
