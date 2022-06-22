#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include <iostream>
using namespace std;

#define private public
#include "../sample_TS/PrintData_01.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestA{
	TEST_CLASS(UnitTestA){
	public:
		
		TEST_METHOD(TestMethod1){
			string testData = " TESTING 001 ";
			PrintData_01 pd01 = PrintData_01();
			Assert::AreEqual(testData, pd01.ShowText_typeA(testData));
		}
	};
}
