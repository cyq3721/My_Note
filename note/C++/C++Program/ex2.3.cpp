#include <iostream>

using namespace std;

struct Point{
private:
  double x, y;
public:
  Point(double a, double b){
    x = a;
    y = b;
  }
  void Display(){
    cout<<x<<"\t"<<y<<endl;
  }
};

int main(){
    Point a(12.4, 21.56);
    a.Display();
    return 0;
}  
  
