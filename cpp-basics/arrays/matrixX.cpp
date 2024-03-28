#include <iostream>

#define N 11

using namespace std;

int main()
{
  short E[N][N];

  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      if ((i == N-j-1) || (i == j)) E[i][j] = 1;
      else E[i][j] = 0;
    }
  }

  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      cout << E[i][j] << " ";
    }
    cout << endl;
  }
}
