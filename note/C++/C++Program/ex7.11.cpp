#include <iostream>
#include <vector>
using namespace std;
typedef vector<char>::iterator pt;
int main(){
  char st[11]="abcdefghij";
  vector<char> a(st,st+10);   //最后的结束标记\0 不复制；
  pt p = a.begin();
  a.insert(p,'X');
   copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
   cout<<endl;

   p = a.begin();
   a.insert(p,5,'A');
    copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
    cout<<endl;
  return 0;
}
