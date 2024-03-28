#include <iostream>

using namespace std;

enum numbers {ZERO, ONE, TWO, THREE};
enum numbers4 {FOUR=4, FIVE, SIX};

int main(){
  cout << ZERO << " " << ONE << " " << TWO << endl
   << FIVE << " " << SIX << endl;
}
