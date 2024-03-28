#include <iostream>
#include <list>

using namespace std;

struct book_struct{
  char title[50];
  char author[50];
  int year;
};

int main(){
  list<book_struct> my_list;

  book_struct book = {"primus", "book - 1", 2000};
  my_list.push_back(book);

  book = {"secundus", " book - 2", 1000};
  my_list.push_back(book);

  book = {"tertius", "book - 0", 1223};
  my_list.push_front(book);

  book = {"quatrus", "book after book-1", 2021};
  // my_list.push_back(book);

  list<book_struct>::iterator iterator;
  iterator = my_list.begin();
  for (int i; i<2; i++) iterator++;
  my_list.insert(iterator, book);

  for (iterator = my_list.begin(); iterator != my_list.end(); ++iterator){
    book = *iterator;
    cout << book.title << " " << book.author << " " << book.year << endl;
  }

  my_list.clear();

  return 0;
}
