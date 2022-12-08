#include <iostream>
using namespace std;

int a;

int & fuzhi(int & );

int main(){
  fuzhi(a) =5;
  cout<<"a="<<a<<endl;
}

int & fuzhi(int & i){
  return i;
}
