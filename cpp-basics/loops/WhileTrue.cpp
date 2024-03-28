#include <iostream>

using namespace std;

int main()
{
  double n = -10;
  while (true) {
    n += 1;
    if (n > 10) break;
    if (n < 0) continue;
    cout << n << endl;
  }
}
