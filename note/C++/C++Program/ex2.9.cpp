#include <iostream>
#include <string>

using namespace std;

int main(){
  string Date;
  string Day, Month, Year;
  int i,j,k;
  cout<<"请输入美国格式的日期"<<"（e.g. December 20，2002）"<<endl;
  getline(cin,Date,'\n');

  i = Date.find(" ");
  Month = Date.substr(0,i);
  cout<<"month="<<Month<<endl;

  j = Date.find(",");
  cout<<"j="<<j<<endl;
   Day = Date.substr(i+1,j-i-1);

  Year = Date.substr(j+1);

  cout<<"国际格式的日期："<< Day<<"  "<< Month<<"  "<<Year<<endl;
  return 0;
  
}
