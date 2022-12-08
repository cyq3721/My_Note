#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
  double X,Y;
public:
  Point(double,double);
  double GetX(){return X;}
  double GetY(){return Y;}
  friend double distance (Point &, Point &);
};

Point::Point(double X1,double Y1):X(X1),Y(Y1){}

double distance(Point &a, Point &b){
  double dx = a.X - b.X;
  double dy = a.Y - b.Y;
  return sqrt(dx*dx + dy*dy);
}

int main(){
  Point p1(3.4, 7.9), p2(1.4,2.9);
  cout<<distance(p1,p2)<<endl;
  return 0;
}
