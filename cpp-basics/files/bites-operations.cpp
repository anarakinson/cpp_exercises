#include <iostream>

using namespace std;

int main(){
  FILE *my_file = fopen("out/out_b.dat", "wb");

  if (my_file == NULL){
    cout << "opening error" << endl;
    return 0;
  }

  int a = 1000;
  float a2 = 12.2;

  fwrite((char *)&a, sizeof(int), sizeof(a)/sizeof(int), my_file);
  fwrite((char *)&a2, sizeof(int), sizeof(a2)/sizeof(int), my_file);
  fclose(my_file);

  int b = 0;
  float b2 = 0;
  size_t elements;

  my_file = fopen("out/out_b.dat", "rb");
  elements = fread((char *)&b, sizeof(int), sizeof(b)/sizeof(int), my_file);
  elements += fread((char *)&b2, sizeof(int), sizeof(b2)/sizeof(int), my_file);
  fclose(my_file);

  cout << "elements: " << elements << " is " << b << " and " << b2 << endl;

  return 0;
}
