#include <iostream>
using namespace std;
template <typename T>
T max(T &m1,T &m2){
    return (m1>m2)? m1:m2;
}

int main(){
    cout << max(3.6,4.3) <<" "<<max('a','A')<<endl;
    return 0;
}

