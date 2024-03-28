#include <iostream>
#include "stack.cpp"

using namespace std;

int main(){

  data_struct data = {"bobby", 40};
  push(data);

  data = {"dobby", 20};
  push(data);

  data = {"globby", 120};
  push(data);

  data_struct data2 = {"bibby", 23};
  push(data2);

  show();

  while (top != NULL){
    pop();
  }
}
