#include "pch.h"
#include "CppUnitTest.h"
#include "../STQA2/STQA2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(BranchCoverage)
	{
	public:
		TEST_METHOD(Test1)
		{
			int input = -1;
			std::string output = checkIQ(input);
			std::string expected = "Invalid";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test2)
		{
			int input = 80;
			std::string output = checkIQ(input);
			std::string expected = "Low Average";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test3)
		{
			int input = 70;
			std::string output = checkIQ(input);
			std::string expected = "Borderline";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test4)
		{
			int input = 50;
			std::string output = checkIQ(input);
			std::string expected = "Extremely Low";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test5)
		{
			int input = 100;
			std::string output = checkIQ(input);
			std::string expected = "Average";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test6)
		{
			int input = 119;
			std::string output = checkIQ(input);
			std::string expected = "High Average";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test7)
		{
			int input = 129;
			std::string output = checkIQ(input);
			std::string expected = "Superior";
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(Test8)
		{
			int input = 200;
			std::string output = checkIQ(input);
			std::string expected = "Very Superior";
			Assert::AreEqual(expected, output);
		}
	};
}
