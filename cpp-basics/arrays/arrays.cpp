#include <iostream>

#define N 15

using namespace std;

int main() {
  float y[N], k = 0.5, b = 2;

  for (int i=0; i<N; i++) {
    y[i] = k * i + b;
  }

  for (int i=0; i<N; i++) {
    cout << y[i] << endl;
  }

  cout << sizeof(y) << endl << sizeof(y[0]) << endl;
  cout << sizeof(y) / sizeof(y[0]) << endl;
}
