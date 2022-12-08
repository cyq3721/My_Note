#include <iostream>
#include <cmath>
using namespace std;

class FindRoot{
private:
  float a, b , c , d;
  double x1, x2;
public:
  FindRoot(float,float,float);
  void Find();
  void Display();
};

FindRoot::FindRoot(float x, float y, float z):a(x),b(y),c(z){
  d = b*b - 4*a*c;
}

void FindRoot::Find(){
  if(d==0){
    x1 = -b/(2*a);
    x2 = x1;
  }
  if(d<0)
    cout<<"方程无实数解！"<<endl;
  if(d>0){
    x1=(-b+sqrt(d))/(2*a);
    x2=x1=(-b-sqrt(d))/(2*a);
  }
  return;
}

void FindRoot::Display(){
  cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;
  return;
}

int main(){
  
  float a,b,c;
  cout<<"请输入方程的三个系数a、b、c的值：";
  cin >>a>>b>>c;
  
  FindRoot fangchen(a,b,c);
  
  fangchen.Find();
  fangchen.Display();
  return 0;
  
  
}
