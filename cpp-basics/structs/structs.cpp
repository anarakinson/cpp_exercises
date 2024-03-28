#include <iostream>
#include <cstring>

using namespace std;

int main(){
  struct tag_book{
    char title[100];
    char author[50];
    short year;
    short pages;
    float price;
  };

  struct tag_book book = {
    "da big buk",
    "cleva git",
    1221,
    13,
    99.99
  };

  cout << book.author << endl;

  struct tag_book lib[5];
  lib[0].year = 1441;
  strcpy(lib[0].title, "da long buk");
  strcpy(lib[0].author, "sneaky git");
  lib[0].pages = 1;
  lib[0].price = 9.5;

  lib[1] = book;

  cout << lib[0].author << endl;
  cout << lib[1].author << endl;
}
