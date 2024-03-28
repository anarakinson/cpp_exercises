#include <iostream>

using namespace std;

int main()
{
  int s = 0;
  int n = 0;

  while (s < 100 && n >= 0){
    cout << "input a number: ";
    cin >> n;
    s += n;
    cout << s << endl;
  }
  cout << "stop!" << endl;
}
