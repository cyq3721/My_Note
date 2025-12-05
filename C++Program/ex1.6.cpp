#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
  double a[] = {1.1, 3.4, 4.6, 12};
  double b[4];
  copy(a, a+4, b);
  copy(b+2, b+4, ostream_iterator<double>(cout," "));
  cout<<endl;
  reverse(a, a+4);
  copy(a, a+4, ostream_iterator<double>(cout," "));
  cout<<endl;
  sort(a,a+4);
  copy(a, a+4, ostream_iterator<double>(cout," "));
  cout<<endl;
  sort(a, a+4, greater<double>());
  copy(a, a+4, ostream_iterator<double>(cout," "));
  cout<<endl;

  double *p;

  p = find(a, a+4, 4.6);
  cout<<p<<endl;
  return 0;
}
