#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
	float h;
	float d;
	
	cout << "input d: " << endl;
	cin >> d;
	
	cout << "input h: " << endl;
	cin >> h;

	float S = h * d / 2;

	cout << "area of triangle: S = h * d / 2 = " << S << endl;

	this_thread::sleep_for(chrono::milliseconds(5000));
	return 0;
}