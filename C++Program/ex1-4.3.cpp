#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  float *p;
  float sum = 0.0;
  
  p = new float[5];
  
  for(int i=1; i<=5; i++){
    cin >> *(p+i);
  }
  
  for(int i=1; i<=5; i++){
    sum = sum + *(p+i);
  }

  sort(p,p+5);

  cout<<"sum = "<<sum<<endl;
  cout<<"min = "<<*p<<endl;

  return 0;
}
