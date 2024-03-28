#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str1[100];
  strcpy(str1, "hello");
  cout << str1 << endl;
  cout << strlen(str1) << endl;

  strcat(str1, " world");
  cout << str1 << endl;

  int str_len = strlen(str1);
  cout << str_len << endl;

  cout << sizeof(str1) / sizeof(char);

  cout << "\n_________________" << endl;
  // char a[100];
  char b[20];
  gets(b);
  int cmp = strcmp(str1, b);
  if (!cmp)
    cout << "\"" << str1 << "\" equal to \"" << b << "\"" << endl;
  else cout << "\"" << str1 << "\" not equal to \"" << b << "\"" << endl;
  puts(b);
  //-----------------------------
  char str2[100];
  int age = 30;
  char name[100] = "billy";
  double perc = 35.5;
  sprintf(str2,
          "hello, %s! your age is %d, and your percent is %.2f%%",
          name, age, perc);
  puts(str2);
  //-----------------------------
  char str_a[100] = "123";
  char str_b[100] = "123.456";
  char str_c[100] = "123,456";

  int dig_a = atoi(str_a);
  double dig_b = atof(str_b);
  double dig_c = atof(str_c);

  cout << dig_a << endl;
  cout << dig_b << endl;
  cout << dig_c << endl;
  str1[3] = 'Z';
  str1[11] = 'Z';
  str1[12] = 'Z';
  cout << str1 << endl;
}
