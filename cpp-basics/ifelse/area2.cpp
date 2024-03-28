#include <iostream>

using namespace std;

int main()
{
  short choice = -1;
  cout << "1 - triangle area\n2 - square area\n" << endl;
  cin >> choice;
  cout << "choice: " << choice << endl;

  double h, a, s = 0;
  if (choice == 1) {
    cout << "input a: " << endl; cin >> a;
    cout << "input h: " << endl; cin >> h;
    s = h * a * 0.5;
    cout << "Square is: " << s << endl;
  }
  else if (choice == 2) {
    cout << "input a: " << endl; cin >> a;
    cout << "input b: " << endl; cin >> h;
    s = h * a;
    cout << "Square is: " << s << endl;
  }
  else
    cout << "\n!!!ERROR!!!\n";
}
