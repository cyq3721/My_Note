#include <iostream>
#include <vector>
using namespace std;

int main(){
  char st[11]="abcdefghij";
  vector<char> a(st,st+10);
  for(int i=0; i<10; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl<<a.capacity()<<" "<<a.size()<<endl;
  a.pop_back();
  cout<<a.capacity()<<" "<<a.size()<<endl;
  a.push_back('w');
  a.push_back('p');
   cout<<endl<<a.capacity()<<" "<<a.size()<<endl;
   a.clear();
   cout<<a.size()<<endl;
  return 0;
}
