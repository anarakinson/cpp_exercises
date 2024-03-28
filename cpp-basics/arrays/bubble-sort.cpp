#include <iostream>

using namespace std;

int main()
{
  short a[] = {3, 5, 1, 6, 2, 4, 7, 9, 8};
  int N = sizeof(a) / sizeof(short);

  for (int i=0; i<N-1; i++){
    short min = a[i];
    short pos = i;
    for (int j=i+1; j<N; j++){
      if (min > a[j]){
        pos = j;
        min = a[j];
      }

    short temp = a[i];
    a[i] = a[pos];
    a[pos] = temp;
    }
  }

  for (int i=0; i<N; i++){
    cout << a[i] << " ";
  }
}
