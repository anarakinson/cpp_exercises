#include <iostream>

using namespace std;

int main() {
  int *pntr = new int;
  int *pntr2 = (int *)malloc(sizeof(int));

  int n = 4;
  int *pntr_arr = new int[n];

  *pntr = 1;
  *pntr2 = 2;

  for (int i=0; i<n; i++){
    pntr_arr[i] = i + 1;
  }

  cout << *pntr << " " << *pntr2 << endl;

  cout << "[ ";
  for (int i=0; i<n; i++){
    cout << pntr_arr[i] << " ";
  }
  cout << "]" << endl;

  delete pntr;
  free(pntr2);
  delete[] pntr_arr;

  cout << *pntr << " " << *pntr2 << endl;

  cout << "[ ";
  for (int i=0; i<n; i++){
    cout << pntr_arr[i] << " ";
  }
  cout << "]" << endl;

}
