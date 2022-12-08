#include <iostream>
using namespace std;
class Point{
private:
  int x,y;
public:
  int Setxy(int a, int b);
  int Move(int a, int b);
  int Display();
  int Getx();
  int Gety();
};

int Point::Setxy(int a, int b){
  x = a;
  y = b;
  return 0;
}

int Point::Move(int a, int b){
  x = x + a;
  y = y + b;
  return 0;
}

int Point::Display(){
  cout<<x<<" "<<y<<endl;
}

int Point::Getx(){
  return x;
}

int Point::Gety(){
  return y;
}

int main(){
  Point A, B;
  Point *p = &A;
  A.Setxy(25,88);
  A.Display();
  A.Move(3, 4);
  p->Display();
  return 0;
}
