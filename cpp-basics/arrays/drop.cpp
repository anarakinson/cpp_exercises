#include <iostream>

using namespace std;

int main()
{
  short a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "input number of element: ";
  short x;
  cin >> x;
  for (int i=x; i<10-1; i++){
    a[i] = a[i+1];
  }

  for (int i=0; i<10; i++){
    cout << a[i] << " ";
  }

}
