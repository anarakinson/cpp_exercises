#include <iostream>

using namespace std;

struct book_struct{
  char title[50];
  char author[50];
  short year;
};

struct tag_obj{
  book_struct book;
  tag_obj *prev, *next;
};

tag_obj *head = NULL, *tail = NULL;

void add_obj(tag_obj *obj, book_struct book){
  tag_obj *pointer = new tag_obj;

  pointer->book = book;
  pointer->prev = obj;
  //this row:
  pointer->next = (obj == NULL) ? NULL : obj->next;
  // is equal to:
  // if (obj == NULL){
  //   pointer->next = NULL;
  // }
  // else{
  //    pointer->next = obj->next;
  // }

  if (obj != NULL){ // create connections to prev and next objects from new object
    obj->next = pointer;
    if (obj->next != NULL) {
      obj->next->prev = pointer;
    }
  }

  // change pointers next or prev< if new object last or first
  if (pointer->prev == NULL){
    head = pointer;
  }
  if (pointer->next == NULL){
    tail = pointer;
  }
}

void del_obj(tag_obj *obj){
  if (obj == NULL){
    return;
  }
  tag_obj *prev_obj = obj->prev;
  tag_obj *next_obj = obj->next;

  cout << "delete object: " << obj->book.title << endl;
  delete obj;

  // create connections between previous and nex objects
  if (prev_obj != NULL){
    prev_obj->next = next_obj;
  }
  else{
    head = next_obj;
  }

  if (next_obj != NULL){
    next_obj->prev = prev_obj;
  }
  else{
    tail = prev_obj;
  }
}

void show(){
  tag_obj *current = head;

  while (current != NULL){
    cout << current->book.title << " " << current->book.author <<
    " " << current->book.year << endl;
    current = current->next;
  }
}

int main(){
  book_struct book = {"primus author", "book1", 2000};
  add_obj(tail, book);

  book = {"secundus author", "another book", 1300};
  add_obj(tail, book);

  book = {"tertius author", "fucking book", 450};
  add_obj(head, book);

  show();

  while (head != NULL){
    del_obj(head);
  }
  return 0;
}
