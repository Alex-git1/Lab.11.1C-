#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab11.1C++/Lab11.1C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string line = "Hello!!! World";
			Assert::IsTrue(hasThreeConsecutiveExclamations(line));
		}
	};
}
