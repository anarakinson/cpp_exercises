#include <iostream>

using namespace std;

short x = 765;

void print(){
  short var = 1;
  static short var_st = 1;
  cout << var++ << " " << var_st++ << endl;
}

int main(){
  int n = 3;
  for (int n=0; n<10; n++){
    cout << n << " ";
  }
  cout << endl << n << endl;
  extern short y;
  short x = 2;
  cout << ::x << " " << y << endl;

  cout << "\n____________" << endl;
  for (int n=0; n<5; n++){
    print();
  }

  cout << "\n____________" << endl;

  const short var = 10; //read-only variable 'var'
  // var = 11;
  // test.cpp: In function 'int main()':
  // test.cpp:31:7: error: assignment of read-only variable 'var'
  //    31 |   var = 11;
  //       |   ~~~~^~~~
}

short y = 123;
