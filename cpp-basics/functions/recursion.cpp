#include <iostream>

using namespace std;
// sum of vals of 1d array
int recfunc(int[], int, int);
int arr_sum(int[], int);

int main(){
  int arr[10] = {2, 11, 12, 1, 4, 15, 61, 7, 18, 9};
  int arr_len = sizeof(arr) / sizeof(int);

  cout << arr_sum(arr, arr_len) << endl;
  cout << recfunc(arr, 0, arr_len) << endl;
  // cout << arr_len;
}


int arr_sum(int a[], int arr_len){
  int res = 0;
  for (int i=0; i<arr_len; i++){
    res += a[i];
  }
  return res;
}

int recfunc(int a[], int b, int len_arr){
  int res = a[b];
  // cout << res << endl;
  if (b < len_arr-1) res += recfunc(a, b+1, len_arr);
  return res;
}
