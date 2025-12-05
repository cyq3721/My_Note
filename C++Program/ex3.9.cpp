#include <iostream>
using namespace std;

int * input(int &);

int main(){
  int num;
  int *data;
  data = input(num);
  for (int i =0 ; i<num; i++)
    cout<<data[i]<<"  ";
  delete data;
  return 0;
}

int * input(int &n){
  cout<<"请输入需要的空间数量：";
  cin >> n ;
  if(n <= 0 ) {
    cout <<"空间申请失败！"<<endl;
    return 0;
  }
  else{
    int *buf = new int[n];
    if(buf == 0)
      return 0;
    else{
      for(int i =0; i<n; i++){
	cin >> buf[i];
      }
    }
     return buf;
  }
 
}
