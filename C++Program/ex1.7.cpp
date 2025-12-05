#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1415926535;

int main(){
  int a = 29, b=1001;
  cout<<a<<setw(2)<<b<<endl;
  cout<<setw(6)<<a<<b<<endl;

  cout<<hex<<a<<endl;

  cout<<setprecision(1)<<PI<<endl
      <<setprecision(2)<<PI<<endl
      <<setiosflags(ios_base::showpos)
      <<setprecision(6)<<PI<<endl;

  return 0;
}
