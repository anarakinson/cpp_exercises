#include <iostream>

using namespace std;

int main(){
  char my_string[] = "hello world";
  FILE *my_file = fopen("my_file.txt", "w");

  if (my_file != NULL){
    for (int i=0; my_string[i] != '\0'; i++){
      putc(my_string[i], my_file);
    }
    fclose(my_file);
  }

  FILE *new_file = fopen("my_file.txt", "r");

  if (new_file == 0){
    cout << "file does not exists" << endl;
    return 0;
  }

  char buffer[100];
  int i=0;
  while ((buffer[i] = getc(new_file)) != EOF){
    // cout << (char)getc(new_file);
    i++;
  }
  buffer[i] = '\0';

  cout << endl << buffer << endl;
  fclose(new_file);

  cout << "__________________" << endl;

  char new_string[] = "fuck the world";
  FILE *my_file2 = fopen("my_file2.txt", "w");
  if (my_file2 != NULL){
    fputs(new_string, my_file2);
    fputs(" ", my_file2);
    fputs(new_string, my_file2);
    fclose(my_file2);
  }

  my_file2 = fopen("my_file2.txt", "r");

  if (my_file2 == NULL){
    cout << "file does not exists" << endl;
    return 0;
  }

  char buffer2[20];
  fgets(buffer2, sizeof(buffer2), my_file2);

  cout << buffer2 << endl;
  fclose(my_file2);

  return 0;

}
