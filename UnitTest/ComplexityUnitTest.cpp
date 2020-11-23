#include "pch.h"
#include "CppUnitTest.h"
#include "..\AlgoLib\Complexity.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(exp1_should_work)
		{
			Complexity complexity;

			int result = complexity.exp1(2, 1);
			Assert::AreEqual(2, result);

			result = complexity.exp1(2, 2);
			Assert::AreEqual(4, result);

			result = complexity.exp1(2, 10);
			Assert::AreEqual(1024, result);
		};

		TEST_METHOD(exp2_should_work)
		{
			Complexity complexity;

			int result = complexity.exp2(2, 1);
			Assert::AreEqual(2, result);

			result = complexity.exp2(2, 2);
			Assert::AreEqual(4, result);

			result = complexity.exp2(2, 10);
			Assert::AreEqual(1024, result);
		};

	};
}


