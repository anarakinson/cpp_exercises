#include <iostream>

using namespace std;

int main()
{
  int choice = 0;
  cout << "choose option:\n1 - first option\n2 - second option\n3 - third option\n";
  cin >> choice;

  switch(choice) {
    case 1: cout << "you choose first option"; break;
    case 2: cout << "you choose second option"; break;
    case 3: cout << "you choose third option"; break;
    default: cout << "you choose none";
  }
}
