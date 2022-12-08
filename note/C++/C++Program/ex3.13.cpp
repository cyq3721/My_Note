#include <iostream>

using namespace std;

int add(int n1=0, int n2=0, int n3=0, int n4=0);

int main(){
  cout << add(1,5)<<endl;
  cout << add (3,6,1)<<endl;
  cout << add (34,54,12,4)<<endl;
  cout << add (100)<<endl;
  return 0;
}

int add(int m1,int m2,int m3,int m4){
  return m1+m2+m3+m4;
}
