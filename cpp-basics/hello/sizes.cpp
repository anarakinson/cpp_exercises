#include <iostream>

using namespace std;

int main()
{
  bool b = 1;
  char c = 'a';
  // integers
  short sh = 1;
  int i = 1;
  long l = 1;
  // float
  float f = 1;
  double d = 1;
  double long dl = 1;

  cout << "sizeof(bool)" << sizeof(b) << endl;
  cout << "sizeof(char)" << sizeof(c) << endl;
  cout << "sizeof(short)" << sizeof(sh) << endl;
  cout << "sizeof(int)" << sizeof(i) << endl;
  cout << "sizeof(long)" << sizeof(l) << endl;
  cout << "sizeof(float)" << sizeof(f) << endl;
  cout << "sizeof(double)" << sizeof(d) << endl;
  cout << "sizeof(double long)" << sizeof(dl) << endl;

}
