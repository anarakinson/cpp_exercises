#include <iostream>
#include <chrono>
#include <thread>
//#include "pch.h"

using namespace std;

int main()
{

	float a;
	float b;

	cout << "input a: " << endl;
	cin >> a;

	cout << "input b: " << endl;
	cin >> b;

	float c = a / b;
	cout << "a / b = " << c << endl;
	float d = a + b;
	cout << "a + b = " << d << endl;
	float e = a - b;
	cout << "a - b = " << e << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	return 0;
}