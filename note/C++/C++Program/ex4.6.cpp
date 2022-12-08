#include <iostream>
#include <algorithm>
using namespace std;
template<class T>
T *Swap(T & x, T & y ,T & z)
{
   T *tmp = new T[3];
   tmp[0]=x;
   tmp[1]=y;
   tmp[2]=z;
   sort(tmp,tmp+3);
   return tmp;
}
int main()
{
    int n = 15, m = 2, l=6;
    int *p;
    p=Swap(n, m,l);  
    copy(p,p+3,ostream_iterator<int>(cout," "));
    cout<<endl;
    delete p;
   
    return 0;
}
