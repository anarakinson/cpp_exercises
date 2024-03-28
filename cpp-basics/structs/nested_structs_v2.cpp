#include <iostream>
#include <cstring>

#define N 5

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

void show_guys(struct tag_people p[], short n){
  for (int i=0; i<n; i++){
    cout << p[i].name.firstname << endl <<
    p[i].name.lastname << endl <<
    p[i].job << endl <<
    p[i].age << endl;
  }
}

int main(){
  tag_people guys[N] = {
    {{"bobby", "bobbison"}, "bobber", 22},
    {{"billy", "billison"}, "biller", 42},
    {{"dobby", "dobbison"}, "dobber", 32},
  };

  strcpy(guys[3].name.firstname, "globby");
  // strcpy(guys[3].name.lastname, "globbison");
  strcpy(guys[3].job, "globber");
  guys[3].age = 123;

  // for (int i=0; i<N; i++){
  //   cout << guys[i].name.firstname << endl <<
  //           guys[i].name.lastname << endl <<
  //           guys[i].job << endl <<
  //           guys[i].age << endl;
  show_guys(guys, N);
}
