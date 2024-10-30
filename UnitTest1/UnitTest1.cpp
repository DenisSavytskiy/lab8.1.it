#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№8.1.іт/AP_Lab№8.1.іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(IterativeTests)
    {
    public:
        TEST_METHOD(TestCount)
        {
            char str[] = "while doing while loop while";
            int result = Count(str);
            Assert::AreEqual(3, result);
        }

        TEST_METHOD(TestChange)
        {
            char str[] = "while doing while loop while";
            char* result = Change(str);
            Assert::AreEqual("*** doing *** loop ***", result);
        }
    };
}
