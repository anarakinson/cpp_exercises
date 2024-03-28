#include <iostream>

using namespace std;

struct book_struct{
  char author[50];
  char title[100];
  short year;
  int pages;
  float price;
  double weight;
};

int main(){
  book_struct book{
    "sneaky_git",
    "da_big_book",
    1999,
    123,
    13.99,
    3000.255,
  };

  cout << book.author << endl;

  char format1[] = "%s %s %d;%d;%.2f;%.2f"; // optionally %hd;%d;%f;%lf for using in fscanf function

  FILE *my_file = fopen("books.dat", "w");

  if (my_file != NULL){
    fprintf(my_file, format1,
      book.author, book.title,
      book.year, book.pages, book.price, book.weight);
      fclose(my_file);
  }

  cout << "________________" << endl;

  book_struct new_book;

  my_file = fopen("books.dat", "r");

  char format2[] = "%s %s %hd;%d;%f;%lf"; // optionally using format1, but .2f/.2lf not working

  if (my_file == NULL){
    cout << "file does not exists";
    return 0;
  }

  fscanf(my_file, format2, // optionally format1, but .2f/.2lf not working
    new_book.author, new_book.title,
    &new_book.year, &new_book.pages,
    &new_book.price, &new_book.weight);
  fclose(my_file);

  cout << new_book.author << endl << new_book.title << endl <<
    new_book.year << endl << new_book.pages << endl <<
    new_book.price << endl << new_book.weight << endl;

}
