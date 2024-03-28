#include <iostream>
using namespace std;

float f_abs(float a){
  if (a < 0) a *= -1;
  return a;
}

int f_abs(int a){
  if (a < 0) a *= -1;
  return a;
}

float powered(float a=3, float b=2){
  float result = 1;
  for (int i=0; i<b; i++){
    result *= a;
  }
  return result;
}

int main(){
  float a = -10.4;
  int b = 4;
  float abs_a = f_abs(a);
  cout << abs_a << endl;
  cout << f_abs(b) << endl;
  cout << powered() << endl;
  cout << powered(3, 4) << endl;
  cout << powered(4, 3) << endl;
  cout << powered(b=3, a=2) << endl;
}
