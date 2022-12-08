#include <iostream>
using namespace std;
class Two;  //不完全类申明；为了提前使用该类的引用作为参数；

class One{
private:
  int xOne;
public:
  One(int a):xOne(a){}
  int Getx(){return xOne;}
  void fun(Two &);
};

class Two{
private:
  int yTwo;
public:
  Two(int b):yTwo(b){}
  int GetY(){return yTwo;}
  friend void One::fun(Two &);  //用类One的成员函数作为 类Two的友元；
};

void One::fun(Two &p){
  p.yTwo = xOne;
 }

int main(){
  One obj1(12);
  Two obj2(20);
  
  
  cout<<obj2.GetY()<<endl;
  obj1.fun(obj2);
    cout<<obj2.GetY()<<endl;
}
