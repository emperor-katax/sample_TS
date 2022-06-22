#pragma once
#include <string>
#include <iostream>
using namespace std;

class PrintData_01 {
	public:
	PrintData_01() {}

	~PrintData_01() {}

	string ShowText_typeA(string t) {
		cout << " message type A :" << t << endl;
		return t;
	}

};

