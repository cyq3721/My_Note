#include <iostream>
using namespace std;
class Base{
private:
  double x,y;
  const double p;  //常量数据，其初始化必须用初始化列表
public:
  Base(double m, double n, double d):p(d),x(m),y(n){}
  void Show();
  void Show_const() const;
};

void Base::Show(){
  cout<<"调用非const"<<x<<","<<y<<","<<p<<endl;
  return;
}

void Base::Show_const() const{
  cout<<"调用const成员函数"<<endl;
  return;
}

int main(){
  Base a(9.1, 4.64,3.2);
  Base const b(2.1, 4.1,6.0);
  a.Show();
  b.Show_const();
    return 0;
}



  
