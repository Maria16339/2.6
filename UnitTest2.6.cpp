#include "pch.h"
#include "CppUnitTest.h"
#include"C://Users/User/source/repos/2.6/2.6/Rectangle.h"
#include"C://Users/User/source/repos/2.6/2.6/Rectangle.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle::Pair pair(3,4);
			Assert::AreEqual(pair.Dobutok(), 12.0);
			
		}
	};
}
