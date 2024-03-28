#include <iostream>

using namespace std;

int main(){

  FILE *my_file = fopen("my_file.txt", "r");

  if (my_file == NULL){
    cout << "file does not exists";
    return 0;
  }

  char buffer;
  fseek(my_file, 0, SEEK_END);
  int length = ftell(my_file);
  cout << "string length: " << length << endl;

  for (int i=1; i<=length; i++){
    fseek(my_file, -i, SEEK_END);
    buffer = getc(my_file);
    putchar(buffer);
  }
  putchar('\n');

  fclose(my_file);

  return 0;

}
