#include <iostream>
using namespace std;

void upndown(int n){
  cout << "down" << n << endl;
  if (n < 4) upndown(n+1);
  cout << "up" << n << endl;
}

int main(){
  upndown(1);
}
