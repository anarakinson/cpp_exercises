#include <iostream>

using namespace std;

int main()
{

  // WHILE LOOP
  double s = 0;
  int n = 1;
  while (n <= 1000) {
    s += 1. / n;
    n += 1;
  }
  cout << s << endl;

  // FOR LOOP
  s = 0;
  for (n = 1; n <= 1000; n++){
    s += 1. / n;
  }
  cout << s << endl;

}
