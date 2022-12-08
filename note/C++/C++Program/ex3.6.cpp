#include <iostream>
using namespace std;

int Display(string s1, string s2="", string s3="");

int main(){
  string s1("现在"),s2("过去"),s3("将来");
  Display(s1);
  Display(s1,s2,s3);
  Display(s1,s2);
  return 0;
}

int  Display(string s1,string s2,string s3){
  if(s2 =="" && s3=="")
    cout<<s1<<endl;
  else if(s3 == "" && s2 != "")
    cout<<s1<<","<<s2<<endl;
  else
    cout<<s1<<","<<s2<<","<<s3<<endl;
  return 0;
}
