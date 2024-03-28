#include <iostream>

using namespace std;

int main()
{
  short a[10] = {1, 2, 3, 5, 6, 7, 8, 9, 10};

  for (int i=0; i<10; i++){
    cout << a[i] << " ";
  }

  cout << endl << "----------" << endl;

  for (int i=10; i>3; i--){
    a[i] = a[i-1];
    // cout << a[i] << i << endl;
  }

  a[3] = 4;

  for (int i=0; i<10; i++){
    cout << a[i] << " ";
  }
}
