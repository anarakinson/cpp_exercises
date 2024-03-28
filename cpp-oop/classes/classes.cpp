#include <iostream>

using namespace std;

class Point{
private:
  int x, y;
public:
  void set_coord(int p_x, int p_y){
    x = p_x;
    y = p_y;
  }
  void get_coord(){
    cout << x << " ";
    cout << y << endl;
  }
};

int main(){
  Point point;
  point.set_coord(1, 2);
  Point *pnt_pointer = new Point();
  pnt_pointer->set_coord(1, 2);
  pnt_pointer->get_coord();
  delete pnt_pointer;
}
