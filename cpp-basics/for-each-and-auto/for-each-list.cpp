#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> my_list = {1, 2, 3, 1, 2, 3};

  for (const auto &list_value : my_list){
    cout << list_value << " ";
  }

  cout << endl;

  for (list<int>::iterator i = my_list.begin(); i != my_list.end(); i++){
    cout << *i << " ";
  }
}
