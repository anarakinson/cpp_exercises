#include <iostream>

#define N 3

using namespace std;

struct person_struct {
  char name[50];
  char lastname[50];
  short age;
  float weight;
};

int main(){
  person_struct person1 = {
    "bobby",
    "bobbison",
    24,
    77.5,
  };
  person_struct person2 = {
    "jack",
    "jackison",
    52,
    123.712,
  };
  person_struct person3 = {
    "jorge",
    "jorgeson",
    34,
    34.14,
  };

  FILE *my_file = fopen("out/persons.dat", "wb");

  if (my_file == NULL){
    cout << "opening error";
    return 0;
  }

  fwrite((char *)&person2, sizeof(person_struct), 1, my_file);
  fclose(my_file);

  person_struct person1_new;
  size_t elements;

  my_file = fopen("out/persons.dat", "rb");
  elements = fread((char *)&person1_new, sizeof(person_struct), 1, my_file);
  fclose(my_file);

  cout << person1_new.name <<
  endl << person1_new.lastname <<
  endl << person1_new.age <<
  endl << person1_new.weight <<
  endl;

  cout << "_________________" << endl;

  person_struct p[N] = {person1, person2, person3};
  my_file = fopen("out/persons.dat", "wb");
  if (my_file ==NULL){
    cout << "opening error";
    return 0;
  }

  fwrite((char *)&p, sizeof(person_struct), N, my_file);
  fclose(my_file);

  person_struct p2[N];
  my_file = fopen("out/persons.dat", "rb");
  fread((char *)&p2, sizeof(person_struct), N, my_file);
  fclose(my_file);

  for (int i=0; i<N; i++){
    cout << p2[i].name <<
    endl << p2[i].lastname <<
    endl << p2[i].age <<
    endl << p2[i].weight <<
    endl << endl;
  }

  // more difficult way
  cout << "_________________" << endl;

  person_struct p3[N];
  my_file = fopen("out/persons.dat", "rb");
  int i = 0;
  while (!feof(my_file)){
    fread((char *)&p3[i], sizeof(person_struct), 1, my_file);
    if (ferror(my_file)){
      cout << "read error\n";
      break;
    }
    i++;
  }

  for (int i=0; i<N; i++){
    cout << p3[i].name <<
    endl << p3[i].lastname <<
    endl << p3[i].age <<
    endl << p3[i].weight <<
    endl << endl;
  }

  return 0;
}
