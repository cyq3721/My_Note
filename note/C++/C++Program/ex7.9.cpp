#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<char> a(10), b(10);
  cout<<a.empty()<<" "<<b.size()<<endl;

  copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
  for(char i='a', j=0; j<10; j++){
    a[j]=i+j;
    cout<<a[j]<<" ";
  }
  cout<<endl;
  copy(a.begin(),a.end(),b.begin());
	copy(b.begin(),b.end(),ostream_iterator<char>(cout," "));
	cout<<endl;
	reverse_copy(b.begin(),b.end(),ostream_iterator<char>(cout," "));
	cout<<endl;
	      cout<<b.front()<<" "<<b.back()<<" "<<a.operator[](5)<<endl;
	      cout<<a.capacity()<<" "<<a.max_size()<<endl;

	      a[10]='T';
	      copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
	      cout<<endl;
	      cout<<a.capacity()<<endl;
  return 0;
}
