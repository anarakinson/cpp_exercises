#include <iostream>

using namespace std;

int main() {


  cout << "________________" << endl;

  struct test_struct{
    int a;
    char b;
  };

  test_struct my_strt = {1, 'a'};
  cout << my_strt.a << my_strt.b << endl;
  test_struct *pnt_str = &my_strt;

  (*pnt_str).a = 2;
  cout << (*pnt_str).a << (*pnt_str).b << endl;
  my_strt.b = 'q';
  pnt_str->a = 3;
  cout << my_strt.a << my_strt.b << endl;
  my_strt.a = 2;
  cout << (*pnt_str).a << my_strt.b << endl;

}
