#include <iostream>
#include <tuple>

using namespace std;

void swap(int &arg1, int &arg2){
  int temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}

tuple<int, int> swap2(int a, int b){
  return make_tuple(b, a);
}

int main() {

  int a = 10, b = 5;
  cout << a << " " << b << endl;

  swap(a, b);
  cout << a << " " << b << endl;

  tie(a, b) = swap2(a, b);
  cout << a << " " << b << endl;

}
