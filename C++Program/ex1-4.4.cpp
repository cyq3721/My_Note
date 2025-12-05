#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
  int a[] = {1,2,3,4,5,6,7,8};
  int b[8];
  int *p;
  p = find(a, a+8, 4);
  cout<<"4的位置："<<p<<endl;
  copy(a, a+8, b);
  reverse(a, a+8);
  p = find(a, a+8, 4);
  cout<<"4的位置："<<p<<endl;

  cout<<"a:";
  copy(a,a+8, ostream_iterator<int>(cout," "));
  cout<<endl;
  cout<<"b:";
  copy(b,b+8, ostream_iterator<int>(cout," "));
  cout<<endl;
  return 0;
}
