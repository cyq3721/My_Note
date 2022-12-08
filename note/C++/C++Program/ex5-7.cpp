#include <iostream>
using namespace std;
class Base{
private:
  int x;
  const int a; //常数据成员，只能用初始化列表初始化；
  static const int b; //静态常数据成员，必须在类外初始化；
  const int& r; //常引用，只能用初始化列表初始化；
public:
  Base(int,int);
  void Show(){
    cout<<"x="<<x<<" "<<"a="<<a<<" "<<"b="<<b<<" "<<"r="<<r<<endl;
    return;
  }
  void Display(const double& r){
    cout<<r<<endl;
    
  }
};

const int Base::b = 125; //静态常数据成员在类外初始化；

Base::Base(int i, int j):x(i),a(j),r(x){
}

int main(){
  Base a1(120,32), a2(112,234); //实例化建立对象；
  a1.Show();
  a2.Display(3.1215926);
}
