#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){
  double a[]={1.1, 4.4, 3.3, 2.2};
  vector<double> va(a,a+4), vb(4);
  typedef vector<double>::iterator iterator;
  iterator first = va.begin();
  for(first; first<va.end(); first++){
    cout<<*first<<" ";
  }
  cout<<endl;
  for(--first; first>=va.begin(); first--){
    cout<<*first<<" ";
  }

  copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));

  return 0;
}
