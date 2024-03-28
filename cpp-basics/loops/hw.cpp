#include <iostream>

using namespace std;

int main()
// {
//   double s = 1;
//   for (double i = -3; i <= 10; i++){
//     if (i == 0) continue;
//     s *= i * i;
//     cout << s << endl;
//   }
// }
{
  double x1 = 0;
  double x2;
  int n;
  for (n = 0; n < 10; n++){
    cout << "input a number: ";
    cin >> x2;
    if (n == 0) x1 = x2;
    else if (x1 > x2) x1 = x2;
    cout << "minimum: " << x1 << endl;
  }
}
