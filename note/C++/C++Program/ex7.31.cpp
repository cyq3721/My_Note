#include <iostream>
using namespace std;

template <class T, int size=4>
class Sum{
private:
  T m[size];
public:
  sum(T a,T b,T c,T d){
    m[0]=a;
    m[1]=b;
    m[2]=c;
    m[3]=d;
  }
  T S();
};

template <class T,int size=4>
T Sum<T,int size=4>::S(){

}
