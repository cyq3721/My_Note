#include <iostream>
using namespace std;
class Max{
private:
  int a, b, c, d;
  int maxi(int,int);

public:
  int set(int, int, int, int);
  int maxi();
};

int Max::maxi(int a, int b){
  return (a>b)? a:b;
}

int Max::set(int x1, int x2, int x3=0, int x4=0){
  a = x1;
  b = x2;
  c = x3;
  d = x4;
  return 0;
}

int Max::maxi(){
  int x = maxi(a,b);
  int y = maxi(c,d);
  return maxi(x,y);
}

int main(){
  Max A[3];
  A[0].set(12, 19, 3, 45);
  A[1].set(11,43,55);
  A[2].set(45,79);
  for (int i=0; i<3; i++){
    cout<<A[i].maxi()<<endl;
  }
  return 0;
}
