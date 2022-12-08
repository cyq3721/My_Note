#include <iostream>

using namespace std;

int main(){
  int *p;
  p = new int[100];
  for(int i = 1; i <= 100; i++){
    *(p+i) = i;
  }
  for(int i = 1; i <= 100; i++){
    cout <<*(p+i)<<endl;
  }
  delete p;
  return 0;
}
