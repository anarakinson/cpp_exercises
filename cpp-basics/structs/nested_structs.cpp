#include <iostream>
#include <cstring>

#define N 4

using namespace std;

struct tag_name{
  char firstname[100];
  char lastname[100];
};
struct tag_people{
  struct tag_name name;
  char job[100];
  short age;
};

int main(){
  tag_people guys[N];

  strcpy(guys[0].name.firstname, "Bobby");
  strcpy(guys[0].name.lastname, "Bobbison");
  strcpy(guys[0].job, "bobber");
  guys[0].age = 22;

  guys[1] = guys[0];
  strcpy(guys[2].name.lastname, "NotBobbySon");
  strcpy(guys[3].name.lastname, "NotBobbySonV2");
  guys[3].age = 123;

  for (int i=0; i<N; i++){
    cout << guys[i].name.firstname << endl <<
            guys[i].name.lastname << endl <<
            guys[i].job << endl <<
            guys[i].age << endl;
  }
}
