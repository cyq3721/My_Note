#include <iostream>
#include <cmath>
using namespace std;
template <class T>
class Max4{
private:
  T a,b,c,d;
  T Max(T a, T b){
    return (a>b)? a:b;
  }
public:
  Max4(T,T,T,T);
  T Max();
};

template <class T>
Max4<T>::Max4(T x1, T x2, T x3, T x4):a(x1),b(x2),c(x3),d(x4){}
template <class T>
T Max4<T>::Max(){
  return Max(Max(a,b),Max(c,d));
}

int main(){
  Max4<char> Ch('w','a','A','c');
  Max4<int>  In(4,-1,5,6);
  cout<<Ch.Max()<<" "<<In.Max()<<endl;
  return 0;
}
