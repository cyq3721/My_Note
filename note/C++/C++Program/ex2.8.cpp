#include <iostream>
#include <string>

using namespace std;

int main(){
  string str1("We are here!");
  string str2 = "Where are you?";
  cout<<"length of str1:"<<str1.size()<<endl;
  cout<<"The place of D in str1:"<<str1.find("D",0)<<endl;
}
