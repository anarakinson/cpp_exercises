#include <iostream>

using namespace std;

int main(){
  int a = 0;
  cout << a << endl;

  int *ptr_a;
  ptr_a = &a; // name of variable is not a pointer
  // ptr = 1000;
  *ptr_a = 2;

  cout << "a: " << a << endl;
  cout << "*ptr_a: " << *ptr_a << endl;
  cout << "ptr_a: " << ptr_a << endl;
  ptr_a++;
  cout << "*ptr_a + 1: " << *ptr_a << " <<< " << ptr_a << endl;
  ptr_a++;
  cout << "*ptr_a + 2: " << *ptr_a << " <<< " << ptr_a << endl;
  ptr_a++;
  cout << "*ptr_a + 3: " << *ptr_a << " <<< " << ptr_a << endl;

  cout << "________________" << endl;

  int arr[] = {1, 2, 3, 4, 5};

  int *ptr_arr = arr; // name of arr is pointer
  cout << "ptr_arr: " << ptr_arr << endl;
  cout << *ptr_arr << endl;
  // ptr_arr++;
  // cout << "ptr_arr+1: " << ptr_arr << endl;
  // cout << *ptr_arr << endl;
  // ptr_arr++;
  // cout << "ptr_arr+2: " << ptr_arr << endl;
  // cout << *ptr_arr << endl;
  // ptr_arr++;
  // cout << *ptr_arr << endl;
  // ptr_arr++;
  // cout << *ptr_arr << endl;
  // ptr_arr++;
  // cout << *ptr_arr << endl;
  // ptr_arr++;
  for (int i=0; i<10; i++){
    cout << "ptr_arr+" << i << ": " << ptr_arr[i] << endl;
  }

  cout << "________________" << endl;

  a = (256 * 256) + (256 * 3) + 123;
  int *ptr_a1 = &a;
  char *ptr_a2 = (char *)ptr_a1;

  for (int i=0; i<sizeof(int); i++){
    cout << (int)(ptr_a2[i]) << endl;
  }

}
