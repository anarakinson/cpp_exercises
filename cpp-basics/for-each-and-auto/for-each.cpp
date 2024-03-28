#include <iostream>

using namespace std;

int main(){
  double arr[] = {1.12, 2.21, 3.33, 2.1, 1.213};

  for (auto &i : arr){
    cout << i << " ";
    i++;
  }

  cout << endl;

  for (const auto &i : arr){
    cout << i << " ";
  }
}
