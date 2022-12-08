#include <iostream>
using namespace std;

template <class T>
class Max3{
private:
  T a,b,c;
  T Max(T a, T b){
    return (a>b)? a:b;
  }
public:
  Max3(T x,T y,T z):a(x),b(y),c(z){}
  T Max();
};

template <class T>
T Max3<T>::Max(){
  return Max(Max(a,b),c);
}

int main(){
  Max3<float> M(3.5,5.7,4.8);
  cout<<M.Max()<<endl;
  
  
}
