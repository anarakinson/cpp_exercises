#include <iostream>

using namespace std;

struct data_struct{
  char name[50];
  int age;
};

struct tag_obj{
  struct data_struct data;
  struct tag_obj *next;
};

tag_obj *top = NULL; // the last obj is null

tag_obj *push(data_struct data){
  tag_obj *pointer = new tag_obj; // generate new obj
  pointer->data = data; // first obj became second
  pointer->next = top;

  top = pointer; // new obj became first
  return pointer;
}

void pop(){
  if (top == NULL){
    return;
  };

  tag_obj *ptr = top->next;

  cout << "object " << top->data.name << " "
  << top->data.age << " deleted" << endl;

  delete top;
  top = ptr;
}

void show(){
  tag_obj *current = top;
  while (current != NULL){
    cout << current->data.name << " " << current->data.age << endl;
    current = current->next;
  }
}
//
// int main(){
//
//   data_struct data = {"bobby", 40};
//   push(data);
//
//   data = {"dobby", 20};
//   push(data);
//
//   data = {"globby", 120};
//   push(data);
//
//   data_struct data2 = {"bibby", 23};
//   push(data2);
//
//   show();
//
//   while (top != NULL){
//     pop();
//   }
//   cout << data1.name << " " << data1.age << '\n';
//
//   return 0;
// }
