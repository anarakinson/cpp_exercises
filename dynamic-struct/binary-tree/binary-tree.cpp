#include <iostream>

using namespace std;

struct Person{
  char name[100];
  int year;
};

struct tag_obj{
  Person person;
  tag_obj *left, *right;
};

typedef enum type_obj_tree { OBJ_LEFT, OBJ_RIGHT } OBJ_TYPE;

tag_obj *root = NULL;

tag_obj *add_obj(
  tag_obj *obj,
  Person &person,
  OBJ_TYPE type = OBJ_LEFT
) {
  tag_obj *pointer = new tag_obj;

  pointer->left = pointer->right = NULL;
  pointer->person = person;

  if (obj == NULL){
    root = pointer;
  }
  else{
    switch(type) {
      case OBJ_RIGHT: obj->right = pointer; break;
      case OBJ_LEFT: obj->left = pointer;
    }
  }
  return pointer;
}

void del_obj(tag_obj *obj){
  if (obj == NULL) return;
  del_obj(obj->left);
  del_obj(obj->right);

  cout << "delete: " << obj->person.name << endl;
  delete obj;
}

void delete_all(tag_obj * obj){
  if (obj == NULL) return;
  del_obj(obj->left);
  del_obj(obj->right);

  obj->right = obj->left = NULL;
}

void show_obj(tag_obj *obj){
  if (obj == NULL) return;
  cout << obj->person.name << " " << obj->person.year << endl;

  show_obj(obj->left);
  show_obj(obj->right);
}

void show_tree(){
  if (root == NULL) return;
  cout << root->person.name << " " << root->person.year << endl;

  show_obj(root->left);
  show_obj(root->right);
}

int main(){
  Person person = {"bobby", 2000};
  add_obj(NULL, person);

  person = {"mom", 1980};
  tag_obj *mom = add_obj(root, person, OBJ_RIGHT);

  person = {"dad", 1975};
  tag_obj *dad = add_obj(root, person, OBJ_LEFT);

  person = {"mom of mom", 1955};
  add_obj(mom, person, OBJ_RIGHT);

  person = {"dad of mom", 1950};
  add_obj(mom, person);

  person = {"mom of dad", 1945};
  add_obj(dad, person, OBJ_RIGHT);

  person = {"dad of dad", 1946};
  add_obj(dad, person);

  show_tree();
  cout << endl;
  delete_all(root);
  delete root;

  return 0;
}
