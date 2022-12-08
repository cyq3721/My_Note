#include <iostream>
using namespace std;
int main()
      {
          int  a[3][2] = {{1,2},{3,4},{5,6}}; 
          int (*p)[2];//数字大小是第二维的 //不要忘了括号
          p = a; //
          cout << *(*(p + 0) + 0)<<endl;
          //不要忘了两个括号，两次间接引用指针
          cout << *(*(p + 0) + 1) << endl;
          cout << *(*(p + 1) + 0) << endl;
          cout << *(*(p + 1) + 1) << endl;

          return 0;
      }
	  