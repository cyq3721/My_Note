#include <iostream>
using namespace std;
class shape{
public:
  virtual double area() = 0;    // 建立纯虚函数作为接口；
};

class square:public shape{
protected:
  double H;
public:
  square(double i):H(i){}
  double area(){return H*H;}
};

int main(){
  shape *s[2];
  s[0] = new square(3.2);
  s[1] = new square(4.1);
  cout<<s[0]->area() + s[1]->area()<<endl;
  return 0;
}
