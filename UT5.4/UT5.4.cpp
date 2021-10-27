#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.4/Lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT54
{
	TEST_CLASS(UT54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = P0(10.);
			Assert::AreEqual(t, 44.5787, 0.0001);
		}
	};
}
