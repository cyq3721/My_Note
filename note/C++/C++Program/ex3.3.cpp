#include <iostream>
using namespace std;

int swap(int[]);

int main(){
  int a[] = {3,8};
  swap(a);
  return 0;
}

int swap(int a[]){
  int temp = a[0];
  a[0] = a[1];
  a[1] = temp;
  cout<<"a[0]="<<a[0]<<endl;
  cout<<"a[1]="<<a[1]<<endl;
  return 0;
}
