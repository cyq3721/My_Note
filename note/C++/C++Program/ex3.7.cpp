#include <iostream>

using namespace std;

int change(const string &);

int main(){
  string str("Can you change it?");
  change (str);
  cout<<str<<endl;
  return 0;
}

int change(const string &s1){
  string s2 = s1 + "NO!";
  //s1 = s1+ "no!";
  cout<<s2<<endl;
  return 0;
}
