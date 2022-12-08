#include <iostream>
#include <string>

using namespace std;

int swap(string * , string *);
int swap(string, string);

int main(){
  string str1("现在"), str2("过去");
  swap(&str1, &str2);
  cout<<"str1:"<<str1<<endl;
  cout<<"str2:"<<str2<<endl;
  swap(str1,str2);
  cout<<"str1:"<<str1<<endl;
  cout<<"str2:"<<str2<<endl;
  return 0;
}

int swap(string *s1, string *s2){
  string tmp = *s1;
  *s1 = *s2;
  *s2 = tmp;
  return 0;
}

int swap(string s1, string s2){
  string tmp = s1;
  s1 = s2;
  s2 = tmp;
  cout<<"str1="<<s1<<endl;
  cout<<"str2="<<s2<<endl;
  return 0;
}
