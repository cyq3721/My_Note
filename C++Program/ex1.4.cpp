#include <iostream>
using namespace std;

int main(){
  int x = 56;
  int & a = x;
  int& r = a;

  cout<<"x="<<x<<endl
      <<"a="<<a<<endl
      <<"r="<<r<<endl;
  cout<<"&x"<<&x<<endl
      <<"&a"<<&a<<endl
      <<"&r"<<&r<<endl;

  return 0;
}
