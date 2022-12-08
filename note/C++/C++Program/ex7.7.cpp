#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){
  double a[]={1.1, 4.4, 2.2, 3.3};
  vector<double> va(a,a+4), vb(4);
  copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
  reverse_copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
  sort(va.begin(),va.end());
  cout<<endl;
  copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
  cout<<endl;
  sort(va.begin(),va.end(),greater<double>());
  copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
  cout<<endl;
  va.swap(vb);
	copy(vb.begin(), vb.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
  return 0;
}
