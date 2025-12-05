#include <iostream>
using namespace std;

typedef double rray[5];

int main(){
  rray a = {12.3, 34, 23.1, 100.01, 0.4 };
  rray &b = a;

  for (int i = 0; i < 5; i++){
    cout << "a"<<i<<"="<<a[i]<<"   "<<endl;
    cout << "b"<<i<<"="<<b[i]<<"   "<<endl;
  }
  return 0;
}
