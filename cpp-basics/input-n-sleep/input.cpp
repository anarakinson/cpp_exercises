// Example program
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;


int main()
{
	int age;
	cout << "input a number: " << endl;
	cin >> age;	 	//при выполнении программы
					//введите символьную строку, без цифр
					//например: abrakadabra
	cout << "age == " << age << "\n";
	cin.get();

	this_thread::sleep_for(chrono::milliseconds(1000));

	return 0;
}
