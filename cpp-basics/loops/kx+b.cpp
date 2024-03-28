#include <iostream>

using namespace std;

int main()
{
  double f, k, b;

  cout << "input k: ";
  cin >> k;
  cout << "input b: ";
  cin >> b;

  for (double x = 0; x <= 1; x += 0.1){
    f = k * x + b;
    cout << f << endl;
  }
  return 0;
}
