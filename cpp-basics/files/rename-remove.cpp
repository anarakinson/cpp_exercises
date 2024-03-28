#include <iostream>

using namespace std;

int main(){
  if (rename("my_file3.txt", "out/my_file.wtf") == 0){
    cout << "renaming is successfull";
  }
  else {
    cout << "rename error" << endl;
  }

  if (remove("my_file4.txt") !=0) {
    cout << "delete error" << endl;
  }
  else {
    cout << "remove is successfull" << endl;
  }

  return 0;
}
