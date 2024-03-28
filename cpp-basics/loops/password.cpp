#include <iostream>

using namespace std;

int main()
// {
//   const int password = 13;
//   int code_ent;
//   do {
//     cout << "input password: ";
//     cin >> code_ent;
//
//   } while (code_ent != password);
//   cout << "pass!" << endl;
// }
{
  const int password = 13;
  int code_ent;
  while (code_ent != password) {
    cout << "input password: ";
    cin >> code_ent;
  }
  cout << "pass!" << endl;
}
