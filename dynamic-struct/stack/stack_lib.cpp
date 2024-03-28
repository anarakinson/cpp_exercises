#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

struct data_struct{
  char name[50];
  short age;
};

int main(){
  stack<data_struct> my_stack;
  data_struct data = {"bobby", 40};
  my_stack.push(data);

  strcpy(data.name, "billy");
  data.age = 24;
  my_stack.push(data);

  data = {"jimmy", 13};
  my_stack.push(data);

  cout << "stack size: " << my_stack.size() << endl << endl;

  data_struct top;

  for (int i=0; i<my_stack.size(); i++){
    cout << my_stack[i];
  }

  while (!my_stack.empty()){
    top = my_stack.top();
    cout << "object deleting: " << top.name << top.age << endl;
    my_stack.pop();
  }

  return 0;
}
