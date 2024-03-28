#include <iostream>
#define N 6
using namespace std;

int main()
{
  double x;
  double arr[N];

  int n = 0;
  while (true){
    cout << "input a number: ";
    cin >> x;
    if (x >= 0) {
      arr[n] = x;
      n++;
      if (n >= N) break;
    }
  }

  for (int i=0; i<N; i++){
    cout << arr[i] << " ";
  }

  double min = arr[0];
  for (int i=0; i<N; i++){
    if (arr[i] < min) min = arr[i];
  }
  cout << endl << min << endl;
}
