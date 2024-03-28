#include <iostream>
#include "func.h"

using namespace std;

int main(){
  double a, b;
  cout << "input a: ";
  cin >> a;
  cout << "input b: ";
  cin >> b;

  double res1 = add_nums(a, b);
  cout << "sum: " << res1 << endl;
  double res2 = prod_nums(a, b);
  cout << "prod: " << res2 << endl;
  int res3 = prod_nums((int)a, (int)b);
  cout << "prod: " << res3 << endl;
}
