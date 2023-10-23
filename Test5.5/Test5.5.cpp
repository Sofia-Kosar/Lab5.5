#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.5/LAB5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test55
{
	TEST_CLASS(Test55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = St(5.0, 4, 4 );
			Assert::AreEqual(z, 625, 0.00000001);
		}
	};
}
